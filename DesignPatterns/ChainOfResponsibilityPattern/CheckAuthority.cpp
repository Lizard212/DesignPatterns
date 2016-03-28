#include"ManagerPower.h"
#include"DirectorPower.h"
#include"VicePresidentPower.h"
#include"PresidentPower.h"

int main()
{
	PurchasePower *manager = new ManagerPower();
	PurchasePower *director = new DirectorPower();
	PurchasePower *vicepresident = new VicePresidentPower();
	PurchasePower	 * president = new PresidentPower();

	manager->SetSuccessor(director);
	director->SetSuccessor(vicepresident);
	vicepresident->SetSuccessor(president);
	president->SetSuccessor(nullptr);
	PurchaseRequest *request1 = new PurchaseRequest(10000, "BOOK");
	manager->ProcessRequest(request1);

	
	delete manager, director, vicepresident, president, request1;

	system("pause");
	return 0;
}