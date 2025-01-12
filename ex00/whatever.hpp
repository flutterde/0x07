/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:00:32 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/12 15:49:30 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

template <typename T> void	swap(T& a, T& b);
template <typename T> T	min(T a, T b);
template <typename T> T max(T a, T b);

template <typename T> void	swap(T& a, T& b)
{
	T	tmp;

	tmp = a;
	a = b;
	b = tmp;
}

template <typename T> T	min(T a, T b)
{
	return (a > b ? b : a);
}

template <typename T> T max(T a, T b)
{
	return (a > b ? a : b);
}

#endif