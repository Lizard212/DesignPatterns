#include"Cat.h"
#include"Dog.h"

static void changeObjectName(Dog* mic)
{
	mic->setName("kiki");
}

int main()
{
	Dog* mic = new Dog();
	mic->setName("mic");
	cout << mic->getName() << endl;
	mic->digHole();
	mic->setWeight(-1);

	changeObjectName(mic);

	cout << "Dog name after method call: \n" << mic->getName() << endl;
	mic->digHole(); 
	cout << endl;
	system("pause");
	return 0;
}

