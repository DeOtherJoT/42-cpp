#include "../includes/ClapTrap.hpp"

void	printDetails(ClapTrap &obj) {
	std::cout << "Printing details of ClapTrap named : " << obj.getName() << '\n';
	std::cout << "HP      : " << obj.getHitPoints() << '\n';
	std::cout << "EP      : " << obj.getEnergyPoints() << '\n';
	std::cout << "Atk Dmg : " << obj.getAttackDmg() << '\n';
}

int	main(void) {
	ClapTrap	n_Original("Original");
	ClapTrap	n_R2d2("R2-D2");

	/* Testing that everything works */

	n_Original.attack("R2-D2");
	n_R2d2.takeDamage(n_Original.getAttackDmg());
	n_R2d2.beRepaired(10);
	printDetails(n_R2d2);

	/* Testing energy out */

	for (int i = 0; i < 9; i++) {
		n_R2d2.attack("Test");
	}
	printDetails(n_R2d2);
	n_R2d2.beRepaired(1);
	n_R2d2.attack("TEST");

	/* Testing death */

	n_R2d2.takeDamage(20);
	printDetails(n_R2d2);
	n_R2d2.attack("Test");
	n_R2d2.beRepaired(10);
	n_R2d2.takeDamage(1);
	printDetails(n_R2d2);

	/* Testing if the data is shallow copied or deep copied */

	ClapTrap	n_Clone(n_Original);
	ClapTrap	n_Copycat("Ditto");

	n_Copycat = n_Original;

	printDetails(n_Original);
	printDetails(n_Clone);
	printDetails(n_Copycat);

	n_Original.takeDamage(5);

	printDetails(n_Original);
	printDetails(n_Clone);
	printDetails(n_Copycat);

	n_Original.setName("OriginalButBetter");

	printDetails(n_Original);
	printDetails(n_Clone);
	printDetails(n_Copycat);

	return (0);
}