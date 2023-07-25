#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat Constructor called" << '\n';
	this->type = "WrongCat";
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
	std::cout << "WrongCat Copy Constructor called" << '\n';
	*this = src;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Destructor called" << '\n';
}

WrongCat	&WrongCat::operator = (const WrongCat &a) {
	std::cout << "WrongCat assignment operator overload called" << '\n';
	this->type = a.getType();
	return (*this);
}

void	WrongCat::makeSound(void) {
	std::cout << "WrongCat goes meow..." << '\n';
}