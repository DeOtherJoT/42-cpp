#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int					_fn_value;
	static const int	_fract_bits = 8;
public:
	/* Constructors and Destructor*/
	Fixed(void);
	Fixed(const Fixed &src);
	Fixed(const int given_val);
	Fixed(const float given_val);
	~Fixed(void);

	/* Operator Overloads */
	Fixed &operator = (const Fixed &a);
	bool operator > (const Fixed &a);
	bool operator < (const Fixed &a);
	bool operator <= (const Fixed &a);
	bool operator >= (const Fixed &a);
	bool operator == (const Fixed &a);
	bool operator != (const Fixed &a);

	/* Arithmetic Overloads */
	Fixed operator + (const Fixed &a);
	Fixed operator - (const Fixed &a);
	Fixed operator * (const Fixed &a);
	Fixed operator / (const Fixed &a);

	/* Member Functions */
	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;

	Fixed	&min(Fixed &num1, Fixed &num2);
	Fixed	&min(const Fixed &num1, const Fixed &num2);
	Fixed	&max(Fixed &num1, Fixed &num2);
	Fixed	&max(const Fixed &num1, const Fixed &num2);
};

/* Normal Functions */
std::ostream &operator << (std::ostream &out, const Fixed &a);

#endif