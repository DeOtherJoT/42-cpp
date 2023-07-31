#ifndef CAT_HPP
# define CAT_HPP

#include <iostream>
#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
private:
	Brain	*_brain;
public:
	Cat(void);
	Cat(const Cat &src);
	~Cat();
	Cat &operator = (const Cat &a);

	void	makeSound(void);
	Brain	*getBrain(void) const;
};

#endif