#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	int					_fn_value;
	static const int	_fract_bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &src);
	Fixed &operator = (const Fixed &a);
	Fixed(const int given_val);
	Fixed(const float given_val);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
	float	toFloat(void) const;
	int		toInt(void) const;
};

std::ostream &operator << (std::ostream &out, const Fixed &a);

#endif