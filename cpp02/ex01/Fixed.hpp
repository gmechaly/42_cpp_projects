/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gmechaly <gmechaly@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 19:03:51 by gmechaly          #+#    #+#             */
/*   Updated: 2025/09/24 20:46:42 by gmechaly         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_H
# define FIXED_H

# include <iostream>
# include <cmath>

class Fixed {
	public:
		Fixed(void);
		Fixed(const int to_convert);
		Fixed(const float to_convertf);
		Fixed(const Fixed &src);
		Fixed &operator=(const Fixed &rhs);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(const int raw);
		float	toFloat(void) const;
		int		toInt(void) const;
	
	private:
		int					_val;
		static const int	_bits = 8;
};

std::ostream &operator<<(std::ostream &output, const Fixed &fixed);

#endif