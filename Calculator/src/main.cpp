#include<iostream>
#include"../include/main.h"



int main()
{
	// Top level welcome statement
	Cal::NPrinter(std::string("  WELCOME TO THE CALCULATOR  "));

	Cal::emtyline();
	Cal::emtyline();
	
	
	//Menu option 
	Cal::NPrinter(std::string("     CHOOSE YOUR OPTION    "));
	
	Cal::emtyline();;

	Cal::Menu(std::string("     A. "),std::string("Add"));

	Cal::emtyline();

	Cal::Menu(std::string("     B. "),std::string("Subtract"));

	Cal::emtyline();

	Cal::Menu(std::string("     C. "),std::string("Multiply"));

	Cal::emtyline();

	Cal::Menu(std::string("     D. "),std::string("Divide"));

	Cal::emtyline();

	Cal::Menu(std::string("     E. "),std::string("Exit"));
	
	Cal::emtyline();
	
	Cal::NPrinter(std::string("    put your opption >>>   "));
	
	Cal::emtyline();






	//input
	char opinput;
	std::cin >> opinput;
	char upopinput = Cal::ToUpper(opinput);


	char targetA= 'A';
	int numberA = 1;
	


	std::string Rightinput = "A";

	int Ans = Cal::inputassignment(upopinput, targetA, numberA, Rightinput);

	Cal::NPrinter(Ans);
	
	





}