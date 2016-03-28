#pragma once
#include"Stack.h"

class StackIter
{
	const Stack *stk;
	int index;
public:
	StackIter(const Stack *s)
	{
		stk = s;
	}

	void first()
	{
		index = 0;
	}
	void next()
	{
		index++;
	}
	bool isDone()
	{
		return index == stk->sp + 1;
	}

	int currentItem()
	{
		return stk->items[index];
	}
};

StackIter *Stack::createIterator()const
{
	return new StackIter(this);
}

bool operator == (const Stack &l, const Stack &r)
{
	StackIter *itl = l.createIterator();
	StackIter *itr = r.createIterator();

	for (itl->first(), itr->first(); !itl->isDone(); itl->next(), itr->next())
	{
		if (itl->currentItem() != itr->currentItem())
			break;
        	
	}

	bool ans = itl->isDone() && itr->isDone();
	delete itl;
	delete itr;
	return ans;

}