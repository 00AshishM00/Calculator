#pragma once
#include <iostream>

namespace Cal
{
	template<typename input>
	void Printer(const input& value)
	{
		input* valuep = new input(value);
		std::cout << *valuep << "\n";
		
		delete valuep;
		valuep = nullptr;
	}

}