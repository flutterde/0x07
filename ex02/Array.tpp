/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 18:19:21 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/13 16:11:47 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array(void)
{
	this->arr = NULL;
	len = 0;
}

template <typename T>
Array<T>::~Array(void)
{
	if (IS_DEBUG_MODE)
		std::cout << "Array Destructor called" << std::endl;
	delete[] this->arr;
}

template <typename T>
Array<T>::Array(const Array& obj)
{
	if (IS_DEBUG_MODE)
		std::cout << "Array Copy constructor called" << std::endl;
	this->arr = new T[obj.len];
	for (size_t i = 0; i < obj.len; i++)
	{
		this->arr[i] = obj.arr[i];
	}
	this->len = obj.len;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& obj)
{
	if (IS_DEBUG_MODE)
		std::cout << "Array Copy assignment operator called" << std::endl;
	if (this != &obj)
	{
		delete[] this->arr;
		this->arr = new T[obj.len];
		for (size_t i = 0; i < obj.len; i++)
		{
			this->arr[i] = obj.arr[i];
		}
		this->len = obj.len;
	}
	return (*this);
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->arr = new T[n]();
	this->len = static_cast<size_t>(n);
}

template <typename T>
const char *Array<T>::OutBoundsException::what() const throw()
{
	return ("Element out bounds exception.");
}

template <typename T>
size_t	Array<T>::size(void)	const
{
	return (this->len);
}

template<class T>
T&	Array<T>::operator[](int i)	const
{
	if (i >= 0 && i < static_cast<int>(this->len))
		return (this->arr[i]);
	throw Array::OutBoundsException();
}
