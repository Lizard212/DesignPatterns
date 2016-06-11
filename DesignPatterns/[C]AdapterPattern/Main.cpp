#include <iostream>
using namespace std;

class USASocketInterface
{
public:
	virtual void PlugIn() = 0;
};

class VietnamSocketInterface
{
public:
	virtual void PlugIn() = 0;
};

class VietnamSocket :public VietnamSocketInterface
{
public:
	void PlugIn()
	{
		cout << "PlugedIn vietnamesocket";
	}
};

class ElectricIron
{
private:
	USASocketInterface* pInterface;
public:
	void PlugIn(USASocketInterface* pInterface)
	{
		cout << "Electric Iron plugged in adapter" << endl;
	}
};

class Adapter : public USASocketInterface
{
private:
	VietnamSocketInterface* pInterface;
public:
	Adapter(VietnamSocketInterface* pVietnamInterface)
	{
		pInterface = pVietnamInterface;
	}
	void PlugIn()
	{
		cout << "Adapter Plugged In to Indian Socket" << endl;
	}
};


int main()
{
	VietnamSocket* pSocket = new VietnamSocket();
	Adapter* adapter = new Adapter(pSocket);

	adapter->PlugIn();
	ElectricIron* pIron = new ElectricIron();
	pIron->PlugIn(adapter);
	system("pause");
	return 0;
}