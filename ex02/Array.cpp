/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:19:30 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/12 18:36:23 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
template <typename T>
Array<T>::Array(void)
{
	this->arr = new T[1];
}

template <typename T>
Array<T>::~Array(void)
{
	std::cout << "Array Destructor called" << std::endl;
	delete[] this->arr;
}

template <typename T>
Array<T>::Array(const Array& obj)
{
	std::cout << "Array Copy constructor called" << std::endl;
	*this = obj;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
	std::cout << "Array Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		// Add any assignment logic here
	}
	return (*this);
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->arr = new [n];
}

