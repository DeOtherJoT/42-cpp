#include "../includes/FragTrap.hpp"

void	printDetails(FragTrap &obj) {
	std::cout << "Printing details of FragTrap named : " << obj.getName() << '\n';
	std::cout << "HP      : " << obj.getHitPoints() << '\n';
	std::cout << "EP      : " << obj.getEnergyPoints() << '\n';
	std::cout << "Atk Dmg : " << obj.getAttackDmg() << '\n';
}

void	printHeader(std::string header) {
	std::cout << " =============== " << header << " =============== " << '\n';
}

int	main(void) {
	{
		printHeader("Testing named constructor");
		FragTrap	n_One("One");
		FragTrap	n_OneTwo("OneTwo");
		printDetails(n_One);
	}
	{
		printHeader("Testing copy constructor");
		FragTrap	n_Two("Two");
		FragTrap	n_TwoClone(n_Two);

		n_Two.takeDamage(5);

		printDetails(n_Two);
		printDetails(n_TwoClone);
	}
	{
		printHeader("Testing assignment operator");
		FragTrap	n_Three("Three");
		FragTrap	n_Ditto("Ditto");

		n_Ditto = n_Three;
		n_Ditto.beRepaired(42);

		printDetails(n_Three);
		printDetails(n_Ditto);
	}
	{
		printHeader("Testing member functions");
		FragTrap	n_Four("Four");
		n_Four.attack("innocent bystander");
		n_Four.highFivesGuys();
	}

	return (0);
}