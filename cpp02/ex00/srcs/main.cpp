#include "../includes/Fixed.hpp"
#include <iostream>

// int	main(void) {
// 	Fixed	a;
// 	Fixed	b(a);
// 	Fixed	c;

// 	c = b;

// 	std::cout << a.getRawBits() << std::endl;
// 	std::cout << b.getRawBits() << std::endl;
// 	std::cout << c.getRawBits() << std::endl;

// 	return (0);
// }

int	main(void) {
	Fixed	a;
	Fixed	b(a);
	Fixed	c;

	c = b;

	std::cout << "== Fresh inits ==" << '\n';
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	std::cout << "== Checking memory ==" << '\n';
	std::cout << &a << std::endl;
	std::cout << &b << std::endl;
	std::cout << &c << std::endl;

	std::cout << "==Changing a==" << '\n';
	b.setRawBits(5);
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;

	return (0);
}