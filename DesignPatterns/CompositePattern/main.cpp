#include"Manager.h"
#include"Worker.h"
int main()
{
	Manager president("Gerard Butcher", 1000000.0);

	//Let's define several average chiefs
	Manager manager_production_department("John Smith", 400000.0);
	Manager manager_engineering_department("Michael Biner", 400000.0);
	Manager manager_quality_control_department("David Jaskson", 280000.0);
	Manager manager_sales_management_division("Tom Vilow", 270000.0);
	Manager manager_general_affairs_department("Janet Teyllor", 200000.0);

	//Let's define several managers of a engineering department
	Manager team_leader_RandD("Jorge Creig", 250000.0);
	Manager team_leader_QA("Arnold Lambero", 200000.0);

	//Let's define several engineers of a engineering department
	Worker software_developer1("Andrey Lapidos", 200000.0);
	Worker software_developer2("Maxim  Laertsky", 240000.0);
	Worker tester("Miki  Minaj", 130000.0);

	//Now we will add the number of persons as assistants of president
	president.add(&manager_production_department);
	president.add(&manager_engineering_department);
	president.add(&manager_quality_control_department);
	president.add(&manager_sales_management_division);
	president.add(&manager_general_affairs_department);

	//Now we will add the number of persons as assistants of manager engineering department
	manager_engineering_department.add(&team_leader_RandD);
	manager_engineering_department.add(&team_leader_QA);

	//Now we will add the number of persons as assistants of team leader the R&D
	team_leader_RandD.add(&software_developer1);
	team_leader_RandD.add(&software_developer2);

	//Now we will add the tester as assistant of team leader the QA
	team_leader_QA.add(&tester);

	cout << "The hierarchy of the company,\ni.e. president and all who is under his supervision :\n\n";
	president.PrintSalary(1);

	cout << '\n';
	system("pause");
	return 0;
}