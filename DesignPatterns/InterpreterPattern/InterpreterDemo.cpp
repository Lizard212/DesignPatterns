#include"Interpreter.h"

using namespace iterpreter_pattern;

int main()
{
	
	Evaluator sentence("w x z - +");

	static const int sequences[][3] = { { 5, 10, 15 }, { 1, 4, 2 }, { 6, 4 ,9 } };

	for (size_t i = 0; sizeof(sequences) / sizeof(sequences[0]) > i; ++i) {
		Map variables;
		variables["w"] = new Number(sequences[i][0]);
		variables["x"] = new Number(sequences[i][1]);
		variables["z"] = new Number(sequences[i][2]);
		int result = sentence.interpret(variables);
		for (Map::iterator it = variables.begin(); variables.end() != it; ++it) delete it->second;

		std::cout << "Interpreter result: " << result << std::endl;
	}
	system("pause");
	return 0;
}