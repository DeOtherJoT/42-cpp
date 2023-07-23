#include "../includes/Weapon.hpp"
#include "../includes/HumanA.hpp"
#include "../includes/HumanB.hpp"

int	main(void)
{
	{
		Weapon	w_club = Weapon("crude spiked club");

		HumanA	bob("Bob", w_club);
		bob.attack();
		w_club.setType("some other type of club");
		bob.attack();
	}
	{
		Weapon	w_club = Weapon("crude spiked club");

		HumanB	jim("Jim");
		jim.setWeapon(w_club);
		jim.attack();
		w_club.setType("some other type of club");
		jim.attack();
	}
	return (0);
}
