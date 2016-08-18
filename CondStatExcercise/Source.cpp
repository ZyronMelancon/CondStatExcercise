#include<iostream>

int exerciseOne()
{
	int x = 0;
	int y = 0;

	if (y == 0)
	{
		x = 100;
	}
	return 0;
}

int exerciseTwo()
{
	int numa;
	int numb;
	std::cout << "Give me two numbers, and I'll give back the larger number." << std::endl;
	std::cin >> numa >> numb;
	
	if (numa > numb)
	{
		std::cout << "The largest number is " << numa << std::endl;
	}
	else if (numb > numa)
	{
		std::cout << "The largest number is " << numb << std::endl;
	}
	system("pause");
	return 0;
}

int exerciseThree()
{
	int a;
	int b;
	int c;
	int d;
	int e;
	int sum;
	int orderDir;

	std::cout << "Give me five numbers." << std::endl;
	std::cin >> a >> b >> c >> d >> e;
	sum = a + b + c + d + e;

	if (sum > 0)
	{
		orderDir = 1;
	}
	else if (sum < 0)
	{
		orderDir = 0;
	}
	else if (sum == 0)
	{
		orderDir = 2;
	}

	return 0;

}

int exerciseFour()
{
	int choice = 1;
	switch (choice)
	{
	case 1:
		std::cout << "1";
		break;
	case 2:
		
	case 3:
		std::cout << "2 or 3";
		break;
	case 4:
	std::cout << "4";
		break;
	default: 
		std::cout << "Invalid";
		break;
	}
	return 0;
}

int exerciseFive()
{
	int x = 0;
	int y;
	y = (x == 0) ? 0 : 10 / x;

	return 0;
}

int exerciseSix()
{
	int num1;
	int num2;
	char oper;
	int answer;

	while (true)
	{
		std::cout << "This is a basic calculator. Type in a number, a symbol, and a second number." << std::endl;
		std::cin >> num1 >> oper >> num2;

		switch (oper)
		{
		case 37:
			answer = num1 % num2;
			break;
		case 42:
			answer = num1 * num2;
			break;
		case 43:
			answer = num1 + num2;
			break;
		case 45:
			answer = num1 - num2;
			break;
		case 47:
			answer = num1 / num2;
			break;
		default:
			break;
		}

		std::cout << "The answer is: " << answer << std::endl;
		system("pause");
		system("cls");
	}
	return 0;
}

int main()
{
	exerciseTwo();
	system("cls");
	exerciseSix();
	return 0;
}