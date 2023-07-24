#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed {
private:
	int					_fn_value;
	static const int	_fract_bits = 8;
public:
	Fixed(void);
	Fixed(const Fixed &src);
	Fixed &operator = (const Fixed &a);
	~Fixed(void);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
};

#endif