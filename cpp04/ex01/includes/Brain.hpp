#ifndef BRAIN_HPP
# define BRAIN_HPP

#include <iostream>

class Brain {
private:
	std::string	ideas[100];

public:
	Brain();
	Brain(const Brain &src);
	~Brain();
	Brain &operator = (const Brain &a);

	std::string	getIdea(const int index) const;
	void		setIdea(const int index, std::string new_idea);
};

#endif