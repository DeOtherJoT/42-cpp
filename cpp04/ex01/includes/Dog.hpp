#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "Animal.hpp"
#include "Brain.hpp"

class Dog : public Animal {
private:
	Brain	*_brain;
public:
	Dog(void);
	Dog(const Dog &src);
	~Dog();
	Dog &operator = (const Dog &a);

	void	makeSound(void) const ;
	Brain	*getBrain(void) const ;
};

#endif