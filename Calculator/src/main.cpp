#include <iostream>
#include"../include/main.h"



int main()
{
	// Top level welcome statement
	Cal::NPrinter(std::string("  WELCOME TO THE CALCULATOR  "));

	Cal::emtyline();
	
	//Menu option 
	Cal::NPrinter(std::string("     CHOOSE YOUR OPTION    "));
	
	Cal::emtyline();

	Cal::Menu(std::string("A. "),std::string("Add"));

	Cal::emtyline();

	Cal::Menu(std::string("B. "),std::string("Subtract"));

	Cal::emtyline();

	Cal::Menu(std::string("C. "),std::string("Multiply"));

	Cal::emtyline();

	Cal::Menu(std::string("D. "),std::string("Divide"));

	Cal::emtyline();

	Cal::Menu(std::string("E. "),std::string("Exit"));
	
	Cal::emtyline();
	
	char miOP = 'A';
	char maOP = 'D';

	int miIn = 1;
	int maIn = 4;
	
	std::string input = "A B C D E";
	

	char C = Cal::returnonlychar(input, miOP, maOP);
	
	int OP = Cal::mpping(C, miOP, maOP, miIn, maIn);
	
	Cal::NPrinter(OP);


	Cal::Application(OP);



	





}