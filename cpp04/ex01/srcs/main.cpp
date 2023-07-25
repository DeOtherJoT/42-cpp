#include "../includes/main.hpp"

void	printHeader(std::string header) {
	std::cout << " ================= " << header << " ================= " << '\n';
}

int	main(void) {
	// {
	// 	printHeader("Testing for simple init and mem leaks");
	// 	const Dog	*j = new Dog();
	// 	const Cat	*i = new Cat();

	// 	for (int a = 0; a < 100; a++) {
	// 		if (j->getBrain()->getIdea(a).compare("This is an idea") != 0) {
	// 			std::cout << "Unexpected problem in Dog's brain at index " << a << '\n';
	// 			exit(EXIT_FAILURE);
	// 		}
	// 		if (i->getBrain()->getIdea(a).compare("This is an idea") != 0) {
	// 			std::cout << "Unexpected problem in Cat's brain at index " << a << '\n';
	// 			exit(EXIT_FAILURE);
	// 		}
	// 	}

	// 	delete j;
	// 	delete i;

	// 	system("leaks catdog");
	// }
	// {
	// 	printHeader("Testing if the normal Copy Constructor is working");
	// 	Dog	*ori = new Dog();
	// 	Dog *copy = new Dog(*ori);

	// 	for (int a = 0; a < 100; a++) {
	// 		if (ori->getBrain()->getIdea(a).compare("This is an idea") != 0) {
	// 			std::cout << "Unexpected problem in Dog's brain at index " << a << '\n';
	// 			exit(EXIT_FAILURE);
	// 		}
	// 		if (copy->getBrain()->getIdea(a).compare("This is an idea") != 0) {
	// 			std::cout << "Unexpected problem in Cat's brain at index " << a << '\n';
	// 			exit(EXIT_FAILURE);
	// 		}
	// 	}

	// 	delete ori;
	// 	delete copy;

	// 	system("leaks catdog");
	// }
	// {
	// 	printHeader("Testing if the Assignment Overload is working");
	// 	Dog *dog1 = new Dog();
	// 	Dog *dog2 = new Dog();

	// 	dog2->getBrain()->setIdea(0, "New idea");

	// 	*dog1 = *dog2;

	// 	std::cout << dog1->getBrain()->getIdea(0) << '\n';

	// 	delete dog1;
	// 	delete dog2;

	// 	system("leaks catdog");
	// }
	{
		printHeader("Testing according to the PDF");
		Animal	*animals[6];

		for (int i = 0; i < 6; i++) {
			if (i < 3) 
				animals[i] = new Dog() ;
			else 
				animals[i] = new Cat() ;
		}

		for (int x = 0; x < 6; x++)
			std::cout << "animals[" << x << "] = " << animals[x]->getType() << '\n';

		for (int y = 0; y < 6; y++)
			delete animals[y];

		system("leaks catdog");
	}
	// {
	// 	printHeader("Proof of a deep copy");
	// 	Cat	*ori = new Cat();
		
	// 	ori->getBrain()->setIdea(1, "First change");

	// 	Cat *copy = new Cat(*ori);

	// 	ori->getBrain()->setIdea(1, "Second change");

	// 	std::cout << copy->getBrain()->getIdea(1) << '\n';
	// 	std::cout << ori->getBrain()->getIdea(1) << '\n';

	// 	delete ori;

	// 	std::cout << copy->getBrain()->getIdea(1) << '\n';

	// 	delete copy;

	// 	system("leaks catdog");
	// }
	// {
	// 	printHeader("Example of a shallow copy");
	// 	WrongCat	*ori = new WrongCat();

	// 	ori->getBrain()->setIdea(1, "First change");

	// 	WrongCat	*copy = new WrongCat(*ori);

	// 	ori->getBrain()->setIdea(1, "Second change");

	// 	std::cout << copy->getBrain()->getIdea(1) << '\n';
	// 	std::cout << ori->getBrain()->getIdea(1) << '\n';

	// 	delete ori;
	// 	// delete copy;

	// 	system("leaks catdog");
	// }
	return (0);
}