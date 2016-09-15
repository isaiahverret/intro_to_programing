#include <iostream>
using namespace std;

int main()

{



	/// 1. 1. Look at the following definitions and initializations:
	///If the address of c is 6940, the address of d is 9772, and the address of e is 2224. What will
	///be printed when the following statements are executed sequentially ?
	///char c = 'T', d = 'S';
	///char *p1 = &c;
	///char *p2 = &d;
	///char *p3;
	///p3 = &d;
	///cout << "*p3 = " << *p3 << endl; // (1)
	///p3 = p1;
	///cout << "*p3 = " << *p3; // (2)
	///cout << ", p3 = " << p3 << endl; // (3)
	///*p1 = *p2;
	///cout << "*p1 = " << *p1; // (4)
	///cout << ", p1 = " << p1 << endl; // (5)


	//char c = 'T', d = 'S';
	//char *p1 = &c;
	//char *p2 = &d;
	//char *p3;


	//p3 = &d;
	//cout << "*p3 = " << *p3 << endl; // (1)
	//p3 = p1;
	//cout << "*p3 = " << *p3; // (2)
	//cout << ", p3 = " << p3 << endl; // (3)
	//*p1 = *p2;
	//cout << "*p1 = " << *p1; // (4)
	//cout << ", p1 = " << p1 << endl; // (5)
	///2. Consider the following statements :	//int *p;
	//int i;
	//int k;
	//i = 42;
	//k = i;
	//p = &i;	///3 After these statements, which of the following statements will change the value of i to 75 ?
		///A.k = 75;
	///B. *k = 75;
	///C.p = 75;
	///D. *p = 75;
	///E.Two or more of the answers will change i to 75.	// Answer *p	system("pause");	return 0;}