/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:08:27 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/13 15:57:08 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

# include <iostream>

template <typename T, typename Func> void	iter(T *arr, size_t l, Func fn);

template <typename T, typename Func>
void	iter(T *arr, size_t l, Func fn)
{
	if (!arr || !l)
		return ;
	for (size_t i = 0; i < l; i++)
		fn(arr[i]);
}

#endif