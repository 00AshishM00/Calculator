#pragma once
#include <iostream>
#include <cctype>
#include <typeinfo>
#include <stdexcept>
#include<cmath>
#include<string>

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


	//comparing input
	template<typename T>
	static int inputassignment(T&  value1, const char& minC,const char& maxC, const int& minI,const int& maxI)
	{
		if constexpr (std::is_same_v<T,char>)
		{
		   if(value1<minC||value1>maxC)
		   {
			   return 0;
		   }
			
		   double mappednum = minI + (static_cast<double>(value1 - minC) * (maxI - minI)) / (maxC - minC);
		   return static_cast<int>(std::round(mappednum));

		}

		else if constexpr (std::is_same_v<T, std::string> || std::is_same_v<T, int>)
		{
			return 0;
		}
		else
		{
			

		}
	}
	

	void validchecks(int& input,std::string& str)
	{
		if (input == 0)
		{
			NPrinter(std::string(" invalid input "));
			Menu(std::string("The right inputs are: "), str);
			
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

