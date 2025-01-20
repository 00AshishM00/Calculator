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



	char returnonlychar(std::string str)
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
			else
			{
				in = input[0];
				break;
			}

		}

		return in;

	}







































}