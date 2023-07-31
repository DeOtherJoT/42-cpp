#include "../includes/Dog.hpp"

Dog::Dog() : AAnimal() {
	std::cout << "Dog Constructor called" << '\n';
	this->type = "Dog";
	this->_brain = new Brain();
}

Dog::Dog(const Dog &src) : AAnimal(src) {
	std::cout << "Dog Copy Constructor called" << '\n';
	*this = src;
}

Dog::~Dog() {
	delete this->_brain;
	std::cout << "Dog Destructor called" << '\n';
}

Dog	&Dog::operator = (const Dog &a) {
	std::cout << "Dog assignment operator overload called" << '\n';
	this->type = a.getType();
	delete this->_brain;
	this->_brain = new Brain(*a.getBrain());
	return (*this);
}

void	Dog::makeSound(void) {
	std::cout << "Dog goes woof..." << '\n';
}

Brain	*Dog::getBrain() const {
	return (this->_brain);
}