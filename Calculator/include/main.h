#pragma once
#include <iostream>
#include <cctype>
#include <typeinfo>
#include <stdexcept>
#include <cmath>
#include <string>
#include <sstream>
#include <limits>

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

	void emptyline()
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

	void Application(int& ops,int& EI)
	{
		if (ops == EI)
		{
			NPrinter(std::string("Exiting Calculator"));
			emptyline();
			Cal::NPrinter(std::string("Thank you! for visiting the project and the name is.......Ashish"));
			emptyline();
			emptyline();
			emptyline();
			std::exit(0);
		}
		double ans;

		auto getvalidateInput = [](const std::string& prompt) -> double
		{
				double value;
				std::string userInput;
			
				while (true)
				{
					std::cout << prompt;
					std::getline(std::cin, userInput);

					std::stringstream ss(userInput);
					if (ss >> value && ss.eof())
					{
						return value;
					}
					else
					{
						std::cout << "Invalid input.Please input a valid number.\n";
					}

				}


		};

		double input1 = getvalidateInput("Put your first number \n>>>");

		double input2 = getvalidateInput("Put your secound number \n>>>");

		switch (ops)
		{
		case 1:
			ans = input1 + input2;
			NPrinter(std::string("your answer is:"));
			std::cout << ">>> " << ans << '\n';
			break;

		case 2:
			ans = input1 - input2;
			NPrinter(std::string("your answer is:"));
			std::cout << ">>> " << ans << '\n';
			break;

		case 3:
			ans = input1 * input2;
			NPrinter(std::string("your answer is:"));
			std::cout << ">>> " << ans << '\n';
			break;
		
		case 4:
			if (input2 == 0)
			{
				NPrinter(std::string("Answer is undefine"));
				break;
			}
			else
			{
				ans = input1 / input2;
				NPrinter(std::string("your answer is:"));
				std::cout << ">>> " << ans << '\n';
				break;
			}


		default :

			NPrinter(std::string("put a valid input"));
			break;

		}



		
	}

































}