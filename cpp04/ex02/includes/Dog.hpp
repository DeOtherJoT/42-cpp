#ifndef DOG_HPP
# define DOG_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
private:
	Brain	*_brain;
public:
	Dog(void);
	Dog(const Dog &src);
	~Dog();
	Dog &operator = (const Dog &a);

	void	makeSound(void);
	Brain	*getBrain(void) const ;
};

#endif