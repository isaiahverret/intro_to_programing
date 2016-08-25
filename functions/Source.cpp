#include <iostream>

 //Example 1
//
//void PrintInteger(int variable)
//{
//	std::cout << variable << std::endl;
//}
//int main()
//{
//	int the_variable = 1;
//	PrintInteger(the_variable);
//	{
//		PrintInteger(the_variable);
//		int the_variable = 2;
//		PrintInteger(the_variable);
//		{
//			PrintInteger(the_variable);
//			int the_variable = 3;
//			PrintInteger(the_variable);
//		}
//		PrintInteger(the_variable);
//	}
//	PrintInteger(the_variable);
//	
//	//1122321
//
//
	//example 2
float cam();


int main()
{

	float  stuff = cam();

	system("pause");
	return 0;

};

float cam()
{

	float value1;
	float value2;

	std::cout << std::endl;
	std::cin >> value1 >> value2;
	if (value1 > value2)
	{

		std::cout << value2;
		std::cout << std::endl;
	}
	else if (value1 < value2)
	{
		std::cout << value1;
		std::cout << std::endl;
		return 0;
	}
}

//example 3

	



















//	system("pause")
//}