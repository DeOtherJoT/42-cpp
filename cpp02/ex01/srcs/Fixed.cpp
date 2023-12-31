#include "../includes/Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << '\n';
	this->_fn_value = 0;
}

Fixed::Fixed(const Fixed &src) {
	std::cout << "Copy constructor called" << '\n';
	*this = src;
}

Fixed &Fixed::operator = (const Fixed &a) {
	std::cout << "Copy assignment operator called" << '\n';
	this->_fn_value = a.getRawBits();
	return (*this);
}

Fixed::Fixed(const int given_val) {
	std::cout << "Int constructor called" << '\n';
	this->_fn_value = given_val << this->_fract_bits;
}

Fixed::Fixed(const float given_val) {
	std::cout << "Float constructor called" << '\n';
	this->_fn_value = roundf(given_val * (1 << this->_fract_bits));
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << '\n';
}

int	Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << '\n';
	return (this->_fn_value);
}

void	Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << '\n';
	this->_fn_value = raw;
}

float	Fixed::toFloat(void) const {
	return ((float)this->_fn_value / (float)(1 << this->_fract_bits));
}

int	Fixed::toInt(void) const {
	return (this->_fn_value >> this->_fract_bits);
}

std::ostream &operator << (std::ostream &out, const Fixed &a) {
	// std::cout << "<< Operator overload called" << '\n';
	out << a.toFloat();
	return (out);
}