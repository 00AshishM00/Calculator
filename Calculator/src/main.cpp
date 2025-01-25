#include <iostream>
#include"../include/main.h"



int main()
{

	while (true)
	{
		// Top level welcome statement........
		Cal::NPrinter(std::string("  WELCOME TO THE CALCULATOR  "));

		Cal::emptyline();

		//Menu option.......
		Cal::NPrinter(std::string("     CHOOSE YOUR OPTION    "));

		Cal::emptyline();

		Cal::Menu(std::string("A. "), std::string("Add"));

		Cal::emptyline();

		Cal::Menu(std::string("B. "), std::string("Subtract"));

		Cal::emptyline();

		Cal::Menu(std::string("C. "), std::string("Multiply"));

		Cal::emptyline();

		Cal::Menu(std::string("D. "), std::string("Divide"));

		Cal::emptyline();

		Cal::Menu(std::string("E. "), std::string("Exit"));

		Cal::emptyline();

		char miOP = 'A';
		char maOP = 'E';

		int miIn = 1;
		int maIn = 5;

		int& ExitINdex = maIn;

		std::string input = "A B C D E";


		char C = Cal::returnonlychar(input, miOP, maOP);

		int OP = Cal::mpping(C, miOP, maOP, miIn, maIn);


		Cal::Application(OP, ExitINdex);

		
		Cal::emptyline();
		Cal::emptyline();

		Cal::NPrinter(std::string("Thank you! for visiting this project,and the name is.......Ashish"));

		Cal::emptyline();
		Cal::emptyline();
		Cal::emptyline();
		Cal::emptyline();
	}
	









}