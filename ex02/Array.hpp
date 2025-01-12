/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:19:27 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/12 18:35:07 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP
# include <iostream>

template <class T>
class Array
{
	private:
		T *arr;
	public:
		Array(void); // Default constructor
		Array(const Array& obj); // Copy constructor
		Array&	operator=(const Array& obj); // Copy assignment operator
		~Array(); // Destructor

		Array(unsigned int n);

};

#endif
