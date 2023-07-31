#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class AAnimal {
protected:
	std::string	type;
public:
	AAnimal(void);
	AAnimal(const AAnimal &src);
	virtual ~AAnimal(void);
	AAnimal &operator = (const AAnimal &a);

	virtual void	makeSound(void) = 0;

	std::string	getType() const ;
};

#endif