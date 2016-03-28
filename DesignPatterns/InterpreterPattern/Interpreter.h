#pragma once
#include<iostream>
#include<string>
#include<map>
#include<list>

namespace iterpreter_pattern
{

	typedef std::string String;
	struct Expression;
	typedef std::map<String, Expression*> Map;
	typedef std::list<Expression*>  Stack;

	struct Expression
	{
		virtual int interpret(Map variables) = 0;
		virtual ~Expression() {}
	};

	//
	class Number : public Expression {
	private:
		int number;
	public:
		Number(int number)
		{
			this->number = number;
		}
		int interpret(Map variables)
		{
			return number;
		}
	};

	//
	class Plus : public Expression {
		Expression* left_operand;
		Expression* right_operand;
	public:
		Plus(Expression* left, Expression* right)
		{
			left_operand = left;
			right_operand = right;
		}
		~Plus()
		{
			delete left_operand;
			delete right_operand;
		}

		int interpret(Map variables)
		{
			return left_operand->interpret(variables) + right_operand->interpret(variables);
		}

	};

	class Minus : public Expression {
		Expression* left_operand;
		Expression* right_operand;
	public:
		Minus(Expression* left, Expression* right)
		{
			left_operand = left;
			right_operand = right;
		}
		~Minus()
		{
			delete left_operand;
			delete right_operand;
		}

		int interpret(Map variables)
		{
			return left_operand->interpret(variables) - right_operand->interpret(variables);
		}

	};

	class Variable : public Expression
	{
		String name;
	public:
		Variable(String name) 
		{
			this->name = name;
		}

		int interpret(Map variables)
		{
			if (variables.end() == variables.find(name))
				return 0;
			return variables[name]->interpret(variables);
		}
	};

	class Evaluator : public Expression
	{
		Expression* syntax_tree;
	public:
		Evaluator(String expression)
		{
			Stack expression_stack;

			size_t last = 0;
			for (size_t next = 0; String::npos != last; last = (String::npos == next) ? next : (1 + next))
			{
				next = expression.find(' ', last);
				String token(expression.substr(last, (String::npos == next) ? (expression.length() - last) : (next - last)));

				if (token == "+")
				{
					Expression* right = expression_stack.back(); expression_stack.pop_back();
					Expression* left = expression_stack.back(); expression_stack.pop_back();

					Expression* sub_expression = new Plus(right, left);
					expression_stack.push_back(sub_expression);
				}
				else if (token == "-")
				{
					Expression* right = expression_stack.back(); expression_stack.pop_back();
					Expression* left = expression_stack.back(); expression_stack.pop_back();

					Expression* sub_expression = new Minus(right, left);
					expression_stack.push_back(sub_expression);
				}
				else
					expression_stack.push_back(new Variable(token));
				
			}

			syntax_tree = expression_stack.back();
			expression_stack.pop_back();
		}
		~Evaluator()
		{
			delete syntax_tree;
		}

		int interpret(Map context)
		{
			return syntax_tree->interpret(context);
		}
	};

}