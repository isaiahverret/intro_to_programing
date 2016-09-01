#include <iostream>
struct Zambie
{
	int health;
	bool alive;
	int spirit;
};
struct Ninja
{
	int health;
	bool alive;
	int chi;
};
int Fight(Zambie &z, Ninja &n)
{
	std::cout << "zambie is attacking ninja" << std::endl;
	n.health -= 10;
	std::cout << "the ninja took 10 damage his health is now ->" << n.health <<
		std::endl;
	z.spirit -= 1;
	std::cout << "the zambie attacked so his spirit is now" << z.spirit << std::endl;
	n.chi += 3;
	std::cout << "ninja regans spirit so his spirit is now ->" << n.chi << std::endl;

	//fighting is when a zambie "does damage" to a ninja
	//fighting is when a ninja "does damage" to a zambie
	//"damage" is when we decrement the health variable of a ninja or zambie
	//in order to do "damage" you must "attack"
	//"attack" is able to be performed if you have positive chi if you are a ninja or positive spirit if you a zambie
	return 1;
}
int Fight2(Zambie &z, Ninja &n)
{
	std::cout << "ninja is attacking zambie" << std::endl;
	z.health -= 7;
	std::cout << "the zambie took 15 damage his health is now ->" << z.health << std::endl;
	n.chi -= 5;
	std::cout << "the ninja attack so his chi is now" << n.chi << std::endl;
	z.spirit += 1;
	std::cout << "zambia regans spirit so his spirit is now ->" << z.spirit << std::endl;

	return 1;

}
int main()
{
	Zambie chris = { 90, true, 5 };
	Zambie matthew = { 100, true, 15 };
	Ninja regi = { 150, true, 25 };
	Ninja wilson = { 100, true, 20 };
	char input = '0';

	while (input != 'q')
	{
		std::cin >> input;
		if (input == 'a')
		{
			std::cout << "CHRIS FIGHT REGI" << std::endl; 


			Fight(chris, regi);
		}
		if (regi.health < 0)
		{
			printf("wasted.... GAME OVER\n");
			printf("get guhd lol. \n \a");
			break;
		}
		if (chris.spirit < 1)
		{
			printf("must regen spirit");
			break;
		}
		if (chris.spirit > 5)
		{
			printf("to much chi");
			break;

		}
	
		
		
		if (input == 's')
		{
			std::cout << "Regi Fight Chris as Chris regens spirit";
			Fight2(chris, regi);
		}
		if (chris.health < 0)
		{
			printf("wasted.... GAME OVER\n");
			printf("get guhd lol. \n \a");
			break;
		}
		if (regi.chi < 5)
		{
			printf("must regen chi");
			break;
		}
		if (regi.chi > 24)
		{
			printf("to much chi");
			break;


		}
			printf("new frame \n");
		}
	
			

	system("pause");
	//how i fight??
	return 0;
}




