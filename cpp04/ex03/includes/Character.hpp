#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "ICharacter.hpp"

class Character : public ICharacter {
private:
	std::string	_name;
	AMateria	*spells;
public:
	/* Constructor and Destructors */
	Character(const std::string &given_name);
	Character(const Character &src);
	~Character();

	/* Assignment overload */
	Character &operator = (const Character &a);

	/* Interface overrrides */
	std::string	const &getname() const ;
	void		equip(AMateria *m);
	void		unequip(int idx);
	void		use(int index, ICharacter &target);
};

#endif