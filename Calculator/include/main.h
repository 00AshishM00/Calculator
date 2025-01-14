#pragma once
#include <iostream>

namespace Cal
{	

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

	template<typename input>
	void NPrinter(const input& value)
	{
		input* valuep = new input(value);
		std::cout << *valuep << "\n";
		
		ptrdel(valuep);
	}

	template<typename input1,typename input2>
	void Menu(const input1& value1, const input2& value2)
	{
		input1* val1 = new input1(value1);
		input2* val2 = new input2(value2);

		std::cout << *val1 << *val2 << "\n";

		ptrdel(val1);
		ptrdel(val2);

	}

}

