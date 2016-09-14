#include <iostream>


int main()
{
	int a = 2;
	int b = 3;

	std::cout << a << std::endl;
	std::cout << b << std::endl;


	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";
	std::cout << "\n";



	int& intref = b;
	intref = a;

	

	std::cout << a << std::endl;
	std::cout << b << std::endl;




	system("pause");
	return 0;
};
