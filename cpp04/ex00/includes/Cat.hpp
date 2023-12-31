#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "Animal.hpp"

class Cat : public Animal {
public:
	Cat(void);
	Cat(const Cat &src);
	~Cat();
	Cat &operator = (const Cat &a);

	void	makeSound(void) const;
};

#endif