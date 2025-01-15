#pragma once
#include <iostream>
#include <cctype>

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
	template<typename input1,typename input2>
	void Menu(const input1& value1, const input2& value2)
	{
		input1* val1 = new input1(value1);
		input2* val2 = new input2(value2);

		std::cout << *val1 << *val2 << "\n";

		ptrdel(val1);
		ptrdel(val2);

	}


	std::string rightinput(std::string& str)
	{
		return str;
	}

	
	

	//coparing input
	int inputassignment( char& value1,char& value2, int& value3, std::string Rightinput)
	{
		 
		std::string Rightin = rightinput(Rightinput);

		if (value1 == value2)
		{
			return value3;
		}
		else
		{
			NPrinter(std::string("        Error >>>"));
			NPrinter(std::string("        Wrong input"));
			Menu(std::string("        Right inputs are "), Rightin);
			return 0;

		}

	}
	

	//lowercase make ther upper case.
	char ToUpper(char letter)
	{
		if (letter >= 'a' && letter <= 'z')
		{
			return letter - 32;
		}

		return letter;

	}



}

