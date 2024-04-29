/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alsaez <alsaez@student.42perpignan.fr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 12:44:33 by alsaez            #+#    #+#             */
/*   Updated: 2023/11/15 15:47:51 by alsaez           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template< typename T >
class Array {
		public:
			Array() : _array(new  T[1]), _size(0) { _array[0] = 0;}
			Array(unsigned int n) : _array(new T[n]), _size(n) {}
			Array(Array const &src) : _array(new T[src.size()]), _size(src.size()) { *this = src; }
			~Array() { delete [] _array; }
			Array &operator=(Array const &rhs)
			{
				if (this != &rhs)
				{
					delete [] _array;
					_size = rhs.size();
					_array = new T[_size];
					for (unsigned int i = 0; i < _size; i++)
						_array[i] = rhs._array[i];
				}
				return *this;
			}
			T	&operator[](int i)
			{
				if (i < 0 || i >= static_cast<int>(this->_size))
				{
					throw (std::exception());
				}
				else
					return (*(_array + i));
			}

			T	*getT( void ) const { return (_array); }
			unsigned int	size(void) const { return _size; }

		private:
			T* 				_array;
			unsigned int 	_size;
};

template< typename T >
std::ostream & operator<<(std::ostream & o, Array< T > const & ref)
{
	unsigned int	i;

	i = 0;
	while (i < ref.size())
	{
		std::cout << "T[" << i << "] : " << (ref.getT())[i] << std::endl;
		i++;
	}
	return (o);
}
