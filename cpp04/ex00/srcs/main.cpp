#include "../includes/main.hpp"

void	printHeader(std::string header) {
	std::cout << "\n ================= " << header << " ================= \n" << '\n';
}

int	main(void) {
	{
		printHeader("Testing Animal, Cat and Dog classes without Polymorphism");
		Animal	*var_animal = new Animal();
		Cat		*var_cat = new Cat();
		Dog		*var_dog = new Dog();

		std::cout << "Animal type : " << var_animal->getType() << '\n';
		var_animal->makeSound();
		std::cout << "Cat type    : " << var_cat->getType() << '\n';
		var_cat->makeSound();
		std::cout << "Dog type    : " << var_dog->getType() << '\n';
		var_dog->makeSound();
	
		delete var_animal;
		delete var_cat;
		delete var_dog;
	}
	{
		printHeader("Displaying Polymorphism using the PDF example, modified");
		const Animal	*meta = new Animal();
		const Animal	*j = new Dog();
		const Animal	*i = new Cat();

		std::cout << meta->getType() << " " << std::endl;
		meta->makeSound();
		std::cout << j->getType() << " " << std::endl;
		j->makeSound();
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();

		delete meta;
		delete j;
		delete i;
		// system("leaks poly");
	}
	{
		printHeader("Displaying the issue with unhandled function overrides (no virtual keyword)");
		const WrongAnimal	*i = new WrongCat;
		
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();

		delete i;
		// system("leaks poly");
	}
}