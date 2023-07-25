#include "../includes/Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Constructor called" << '\n';
	for (int i = 0; i < 100; i++)
		this->setIdea(i, "This is an idea");
}

Brain::Brain(const Brain &src) {
	std::cout << "Brain Copy Constructor called" << '\n';
	*this = src;
}

Brain::~Brain() {
	std::cout << "Brain Destructor called" << '\n';
}

Brain &Brain::operator = (const Brain &a) {
	std::cout << "Brain assignment operator overload called" << '\n';
	for (int i = 0; i < 100; i++)
		this->ideas[i] = a.getIdea(i);
	return (*this);
}

std::string	Brain::getIdea(const int index) const {
	return (this->ideas[index]);
}

void	Brain::setIdea(const int index, std::string new_idea) {
	this->ideas[index] = new_idea;
}