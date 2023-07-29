#include "../includes/Fixed.hpp"
#include <iostream>

int main( void ) {
	std::cout << "\nPDF's MAIN\n" << '\n'; 
	{
		Fixed a;
		Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max( a, b ) << std::endl;
	}
	std::cout << "\nOperation tests\n" << '\n';
	{
		Fixed	a(6.90f);
		Fixed	b(1.052f);

		std::cout << "a + b = " << a + b << '\n';
		std::cout << "a - b = " << a - b << '\n';
		std::cout << "a * b = " << a * b << '\n';
		std::cout << "a / b = " << a / b << '\n';
	}
	std::cout << "\nComparison tests\n" << '\n';
	{
		Fixed	a(10);
		Fixed	b(10.01f);

		std::cout << "10 > 10.01 is " << ((a > b) ? "True" : "False") << '\n';
		std::cout << "10 < 10.01 is " << ((a < b) ? "True" : "False") << '\n';
		std::cout << "10 <= 10.01 is " << ((a <= b) ? "True" : "False") << '\n';
		std::cout << "10 >= 10.01 is " << ((a >= b) ? "True" : "False") << '\n';
		std::cout << "10 == 10.01 is " << ((a == b) ? "True" : "False") << '\n';
		std::cout << "10 != 10.01 is " << ((a != b) ? "True" : "False") << '\n';
	}
	std::cout << "\nMin Max tests\n" << '\n';
	{
		const Fixed	a(10);
		const Fixed	b(20);
		
		// Fixed	a(10);
		// Fixed	b(20);

		std::cout << (Fixed::min(a, b)) << '\n';
		std::cout << "a = " << a << '\n';
		std::cout << "b = " << b << '\n';
	}
}
