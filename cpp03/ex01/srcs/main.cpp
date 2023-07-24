#include "../includes/ScavTrap.hpp"

void	printDetails(ScavTrap &obj) {
	std::cout << "Printing details of ScavTrap named : " << obj.getName() << '\n';
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
		ScavTrap	n_One("One");
		printDetails(n_One);
	}
	{
		printHeader("Testing copy constructor");
		ScavTrap	n_Two("Two");
		ScavTrap	n_TwoClone(n_Two);

		n_Two.takeDamage(5);

		printDetails(n_Two);
		printDetails(n_TwoClone);
	}
	{
		printHeader("Testing assignment operator");
		ScavTrap	n_Three("Three");
		ScavTrap	n_Ditto("Ditto");

		n_Ditto = n_Three;
		n_Ditto.beRepaired(42);

		printDetails(n_Three);
		printDetails(n_Ditto);
	}
	{
		printHeader("Testing member functions");
		ScavTrap	n_Four("Four");
		n_Four.attack("innocent bystander");
		n_Four.guardGate();
	}

	return (0);
}