#include "../includes/WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
	std::cout << "WrongCat Constructor called" << '\n';
	this->type = "WrongCat";
	this->_brain = new Brain();
}

WrongCat::WrongCat(const WrongCat &src) : WrongAnimal(src) {
	std::cout << "WrongCat Copy Constructor called" << '\n';
	*this = src;
}

WrongCat::~WrongCat() {
	delete this->_brain;
	std::cout << "WrongCat Destructor called" << '\n';
}

WrongCat	&WrongCat::operator = (const WrongCat &a) {
	std::cout << "WrongCat assignment operator overload called" << '\n';
	this->type = a.getType();
	this->_brain = a.getBrain();
	return (*this);
}

void	WrongCat::makeSound(void) {
	std::cout << "WrongCat goes meow..." << '\n';
}

Brain	*WrongCat::getBrain() const {
	return (this->_brain);
}