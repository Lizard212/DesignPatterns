#include"AdapterOne.h"
#include"AdapterTwo.h"
#include"IAdapter.h"
using namespace std;

int main()
{
	IAdapter *adapter;

	adapter = new AdapterOne();
	adapter->Do();

	delete adapter;

	adapter = new AdapterTwo();
	adapter->Do();
	delete adapter;

	system("pause");
	return 0;
}