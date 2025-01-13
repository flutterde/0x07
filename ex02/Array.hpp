/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:19:27 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/13 12:56:38 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

# ifndef IS_DEBUG_MODE
# define IS_DEBUG_MODE 0
# endif

template <class T>
class Array
{
	private:
		T 		*arr;
		size_t	len;
	public:
		Array(void); // Default constructor
		Array(const Array& obj); // Copy constructor
		Array&	operator=(const Array& obj); // Copy assignment operator
		~Array(); // Destructor
		size_t	size(void)	const;
		T&	operator[](int	i)	const;

		Array(unsigned int n);
		class OutBoundsException : public std::exception {
			public:
				const char*	what() const throw();
		};
};

#include "Array.tpp"

#endif
