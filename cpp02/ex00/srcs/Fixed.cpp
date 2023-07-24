#include "../includes/Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << '\n';
	this->_fn_value = 0;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << '\n';
	this->_fn_value = src.getRawBits();
}

Fixed &Fixed::operator = (const Fixed &a) {
	std::cout << "Copy assignment operator called" << '\n';
	this->_fn_value = a.getRawBits();
	return (*this);
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << '\n';
	return (this->_fn_value);
}

void	Fixed::setRawBits(int const raw) {
	
}