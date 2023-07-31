#include "../includes/Cat.hpp"

Cat::Cat() : AAnimal() {
	std::cout << "Cat Constructor called" << '\n';
	this->type = "Cat";
	this->_brain = new Brain();
}

Cat::Cat(const Cat &src) : AAnimal(src) {
	std::cout << "Cat Copy Constructor called" << '\n';
	*this = src;
}

Cat::~Cat() {
	delete this->_brain;
	std::cout << "Cat Destructor called" << '\n';
}

Cat	&Cat::operator = (const Cat &a) {
	std::cout << "Cat assignment operator overload called" << '\n';
	this->type = a.getType();
	this->_brain = new Brain(*a.getBrain());
	return (*this);
}

void	Cat::makeSound(void) {
	std::cout << "Cat goes meow..." << '\n';
}

Brain	*Cat::getBrain() const {
	return (this->_brain);
}