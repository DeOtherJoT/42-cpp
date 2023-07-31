#include "../includes/DiamondTrap.hpp"

void	printDetails(DiamondTrap &obj) {
	std::cout << "Printing details of DiamondTrap named : " << obj.getName() << '\n';
	std::cout << "HP      : " << obj.getHitPoints() << '\n';
	std::cout << "EP      : " << obj.getEnergyPoints() << '\n';
	std::cout << "Atk Dmg : " << obj.getAttackDmg() << '\n';
}

void	printHeader(std::string header) {
	std::cout << "\n =============== " << header << " =============== \n" << '\n';
}

int	main(void) {
	// {
	// 	printHeader("Testing named constructor");
	// 	DiamondTrap	n_One("One");
	// 	printDetails(n_One);

	// 	n_One.attack("Test");
	// 	printDetails(n_One);
	// 	n_One.beRepaired(10);
	// 	printDetails(n_One);
	// 	n_One.takeDamage(10);
	// 	printDetails(n_One);
	// }
	// {
	// 	printHeader("Testing copy constructor");
	// 	DiamondTrap	n_Two("Two");
	// 	DiamondTrap	n_TwoClone(n_Two);

	// 	n_Two.takeDamage(5);

	// 	printDetails(n_Two);
	// 	printDetails(n_TwoClone);
	// }
	// {
	// 	printHeader("Testing assignment operator");
	// 	DiamondTrap	n_Three("Three");
	// 	DiamondTrap	n_Ditto("Ditto");

	// 	n_Ditto = n_Three;
	// 	n_Ditto.beRepaired(42);

	// 	printDetails(n_Three);
	// 	printDetails(n_Ditto);
	// }
	{
		printHeader("Testing member functions");
		DiamondTrap	n_Four("Four");
		n_Four.attack("innocent bystander");
		n_Four.highFivesGuys();
		n_Four.guardGate();
		n_Four.highFivesGuys();
		n_Four.whoAmI();
	}

	return (0);
}