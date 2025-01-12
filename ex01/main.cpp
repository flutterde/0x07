/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 16:07:57 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/12 18:14:53 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

void	apply(float& n)
{
	n = n * 2;
}

int	main(void)
{
	float	*arr = new float[10];

	for (size_t i = 0; i < 10; i++)
	{
		arr[i] = i + 0.3;
	}
	::iter<float>(arr, 10, apply);
	for (size_t i = 0; i < 10; i++)
	{
		std::cout << "Index " << i << " is " << arr[i] << std::endl;
	}
}