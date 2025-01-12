/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ochouati <ochouati@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/12 13:01:24 by ochouati          #+#    #+#             */
/*   Updated: 2025/01/12 18:10:21 by ochouati         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "whatever.hpp"

void	testSwap(void)
{	
	{		
		int a = 10;
		int b = 5;

		::swap<int>(a, b);
		std::cout << "A: " << a << " B: " << b << std::endl;
	}
	{
		std::string a = "Otm";
		std::string b = "Cho";

		::swap<std::string>(a, b);
		std::cout << "A: " << a << " B: " << b << std::endl;
	}
}

void	testMin(void)
{
	{		
		std::string	a = "zzzaotm"; 
		std::string	b = "zxy";

		std::cout << "the min is: " << ::min<std::string>(a, b) << std::endl; 
	}
	{
		int	a = 15;
		int b = -23;

		std::cout << "the min is: " << min<int>(a, b) << std::endl;
	}
}

void	testMax(void)
{
	{		
		std::string	a = "zzzaotm"; 
		std::string	b = "zxy";

		std::cout << "the max is: " << ::max<std::string>(a, b) << std::endl; 
	}
	{
		int	a = 15;
		int b = -23;

		std::cout << "the max is: " << max<int>(a, b) << std::endl;
	}
}

int	main()
{
	testSwap();
	std::cout << " --------------------------------- " << std::endl;
	testMin();
	std::cout << " --------------------------------- " << std::endl;
	testMax();
}