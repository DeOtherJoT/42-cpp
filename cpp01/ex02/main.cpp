#include <iostream>

/* A good start to understanding pointer vs reference : https://www.geeksforgeeks.org/pointers-vs-references-cpp/ */

int main(void) {
	/* initialise variable */
	std::string	foo = "HI THIS IS BRAIN";

	/* create a pointer to it, something we are used to */
	std::string	*stringPTR = &foo;

	/* create a reference to it, new syntax but roughly same idea-ish */
	std::string	&stringREF = foo;

	std::cout << "========== MEMORY PRINTING ==========\n" << '\n';

	/* printing memory addresses */
	std::cout << "Memory address of the variable : " << &foo << '\n';
	std::cout << "Memory address OF stringPTR    : " << &stringPTR << '\n';
	std::cout << "Memory address OF stringREF    : " << &stringREF << '\n';

	std::cout << "\n========== DIRECT PRINTING ==========\n" << '\n';

	/* printing the value held itself */
	std::cout << "Printing the variable directly : " << foo << '\n';
	std::cout << "Printing stringPTR directly    : " << stringPTR << '\n';
	std::cout << "Printing stringREF directly    : " << stringREF << '\n';

	std::cout << "\n========== STRING PRINTING ==========\n" << '\n';

	/* accessing the string, as usually intended */
	std::cout << "Using the variable, foo        : " << foo << '\n';
	std::cout << "Using the pointer, stringPTR   : " << *stringPTR << '\n';
	std::cout << "Using the reference, stringREF : " << stringREF << '\n';

	return (0);
}