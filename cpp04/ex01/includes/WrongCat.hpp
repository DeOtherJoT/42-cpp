#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include <iostream>
#include "WrongAnimal.hpp"
#include "Brain.hpp"

class WrongCat : public WrongAnimal {
private:
	Brain	*_brain;
public:
	WrongCat();
	WrongCat(const WrongCat &src);
	~WrongCat();
	WrongCat &operator = (const WrongCat &a);

	void	makeSound(void);
	Brain	*getBrain(void) const;
};

#endif