#pragma once
#include <iostream>
#include <cctype>
#include <typeinfo>
#include <stdexcept>
#include <cmath>
#include <string>

namespace Cal
{
	//custom function for deleting and handeling deleted pointer 
	template<typename input>
	void ptrdel(input*& value)
	{
		if (value != nullptr)
		{
			delete value;
			value = nullptr;
		}
		else
		{

		}
	}

	//Normal print function 
	template<typename input>
	void NPrinter(const input& value)
	{
		input* valuep = new input(value);
		std::cout << *valuep << "\n";

		ptrdel(valuep);
	}

	void emtyline()
	{
		NPrinter(std::string(" "));
	}

	//Menu print function
	template<typename input1, typename input2>
	void Menu(const input1& value1, const input2& value2)
	{
		input1* val1 = new input1(value1);
		input2* val2 = new input2(value2);

		std::cout << *val1 << *val2 << "\n";

		ptrdel(val1);
		ptrdel(val2);

	}


	char Toupper(char ch)
	{
		if (ch >= 'a' && ch <= 'z')
		{
			ch = ch - 32;
			return ch;
		}
		else
		{
			return ch;
		}
	}

	char returnonlychar(std::string& str,char& minC,char& maxC)
	{

		char in;
		std::string input;

		

		while (true)
		{
			std::cout << "Put your option here \n>>>";
			std::getline(std::cin, input);

			if (input.length() != 1)
			{
				std::cout << "invalid input.Right inputs are -"<< str <<'\n';
			}
			else if (!std::isalpha(input[0]))
			{
				std::cout << "invalid input.Right inputs are -" << str << '\n';
			}
			else if(toupper(input[0])<minC || toupper(input[0]) >maxC)
			{
				
				std::cout << "inivalid input.Right inputs are -" << str << '\n';

			}
			else
			{
				in = toupper(input[0]);
				break;
			}

		}

		return in;

	}



	int mpping(char& input,char& minC, char& maxC, int minI, int maxI)
	{
	
		double minput = minI + (static_cast<double>(input - minC) * (maxI - minI) / (maxC - minC));
		return static_cast<int>(std::round(minput));

	}

	void Application(int& ops)
	{
		double input1;
		double input2;
		double ans=1;

		while (true)
		{
			std::cout << "Put your first number \n>>>";
			std::cin >> input1;

			if (std::cin.fail())
			{	
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid input.Please input a Number";
			}
			else
			{
				break;
			}
				
		}
		while (true)
		{
			std::cout << "Put your secound number \n>>>";
			std::cin >> input2;
			
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
				std::cout << "Invalid input.Please input a Number";
			}
			else
			{
				break;
			}
		}
		
		switch (ops)
		{
		case 1:
			ans = input1 + input2;
			NPrinter(std::string("your answer is-"));
			std::cout << ">>>" << ans << '\n';
			
			break;

		}

		
	}

































}