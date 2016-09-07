#include <iostream>

int main()
{


// exercise 1

//a.it i s a valid array
//b.it is not a valid array because there are to many values 
//c.it is invalaid it can only have whole numbers 
//d.its is a invalid array because it is missing some values.
//e.valid 
//f.it is invalid it has nothing to idinfy any thing 
//g.it is invalid it has  negitve number 
//h.is a invalind array becaus eit has no {}




//example 2 
//a
/*int values[] = { 2, 6, 10, 14 };
//std::cout << values[2];

//10
//b
/*int values[] = { 2, 6, 10, 14 };
std::cout << ++values[0];*/
//3

//c

/*int values[] = { 2, 6, 10, 14 };
std::cout << values[1]++;*/

//6

//d

//int values[] = { 2, 6, 10, 14 };
//int x = 2;
//std::cout << values[++x];

//14

//e

/*int values[] = { 2, 6, 10, 14 };
std::cout << values[4];*/

//error



//example 3

/*int data[10];
for (int data = 10; data > 0; data--)
std::cout << data << std::endl;*/


//example 4 


//int cam[5];
//	std::cin >> cam[0];
//	std::cin >> cam[1];
//	std::cin >> cam[2];
//	std::cin >> cam[3];
//	std::cin >> cam[4];

//	for (int i = 4; i >= 0; i--)
//	{
//		std::cout << cam[i] << std::endl;
//	}


//example 5


//int cam[10];

//int i = 0;
//std::cin >> cam[0];
//std::cin >> cam[1];
//std::cin >> cam[2];
//std::cin >> cam[3];
//std::cin >> cam[4];
//std::cin >> cam[5];
//std::cin >> cam[6];
//std::cin >> cam[7];
//std::cin >> cam[8];
//std::cin >> cam[9];
//
//int largenum = cam[0];
//int smallnum = cam[0];

//for (i = 8; i < 0; i++);
//{
//	if (largenum < cam[i])
//		largenum = cam[i];

//

//	std::cout << largenum   <<   "\n"  << smallnum << std::endl;
//}


//example 6

// a program that creates a small 3x3 array of integers.Use a nested for loop to initialise
//the numbers 1 - 9. Output the numbers in a grid format.


int cam[3][3] = {
	{ 1, 2, 3 },
	{ 4, 5, 6, },
	{ 7, 8, 9 },
};

for (int i = 0; i < 3; i++)
{
	if (i > 0)
		std::cout << std::endl;
	for (int a = 0; a < 3; a++)
	{
		std::cout << cam[i][a] << " | ";
	}


}






//7

///An application uses a two dimensional array defined as follows :
///int days[29][5];
///Write code that sums each row in the array and displays the results.
///Write code that sums each column in the array and displays the results


//int days[29][5] = {
//	{ 1, 2, 3, 4, 5, },
//	{ 6, 7, 8, 9, 10 },
//	{ 11, 12, 13, 14, 15, },
//	{ 16, 17, 18 ,19 ,20 },
//	{ 21, 22 ,23 ,24 ,25 },
//	{ 26, 27, 28 ,29 ,30 },
//	{},
//	{},
//	{},
//
//};
//
//
//for (int i = 0; i < 29; i++)
//{
//	if (i > 0)
//		std::cout << std::endl;
//	for (int a = 0; a < 5; a++)
//	{
//		std::cout << days[i][a] << " | ";
//	}
//
//}





//8


///Create a program that declares an array of 5 integer values.These values will represent the
///health of 5 characters.Initialise the values all to 100. Your program is to ask the user to
///enter a number(0 to 4) to select a character that is to be attacked by a monster.Each attack
///deals 40 damage per attack.If a player’s health gets below 0 then should not be able to be
///attacked.Your program should simulate 5 attacks.After the attacks have finished, output
///the parties’ remaining health to the console.
///CHALLENGE: Research random number generation and modify your program so that random
///damage is dealt with each attack.

/* int life[5] = { 100, 100, 100, 100, 100, };
for (int i = 0; i < 5; i++)
life[i] = 100;
for (int i = 0; i < 20; i++)
{
std::cout << " enter a number 0 - 4 \n";
int input;
std::cin >> input;
if (input > 4 || input < 0)
std::cout << "this was not a number of 0 - 4 try again";
if (life[input] < 0);

else

life[input] -= 40;
for (int i = 0; i < 5; i++)
{
std::cout << "player :" << i << " health is " << life[i] << std::endl;
}
}*/


//9 















system("pause");
return 0;

}