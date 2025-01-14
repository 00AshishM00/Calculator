#include<iostream>
#include"../include/main.h"



int main()
{
	// Top level welcome statement
	Cal::NPrinter(std::string("  WELCOME TO THE CALCULATOR  "));

	Cal::NPrinter(std::string("    "));
	Cal::NPrinter(std::string("    "));

	Cal::NPrinter(std::string("     CHOOSE YOUR OPTION    "));
	
	Cal::NPrinter(std::string("    "));

	Cal::Menu(std::string("     A. "),std::string("Add"));

	Cal::NPrinter(std::string("    "));

	Cal::Menu(std::string("     B. "),std::string("Subtract"));

	Cal::NPrinter(std::string("    "));

	Cal::Menu(std::string("     C. "),std::string("Multiply"));

	Cal::NPrinter(std::string("    "));

	Cal::Menu(std::string("     D. "),std::string("Divide"));

	Cal::NPrinter(std::string("    "));

	Cal::Menu(std::string("     E. "),std::string("Exit"));
	
	
	

}