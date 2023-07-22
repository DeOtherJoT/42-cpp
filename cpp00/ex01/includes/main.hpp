#ifndef MAIN_H
# define MAIN_H

# define STRING std::string

#include <iostream>
#include <string>

#include "Contact.hpp"
#include "PhoneBook.hpp"

void	printCol(STRING str);
void	printEmptyLine(int index);
STRING	getField(STRING prompt);
int		getValidIndex(int total_contacts);

#endif