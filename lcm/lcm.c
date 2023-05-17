/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lcm.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:56:06 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/27 14:30:13 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

unsigned int	ft_min(unsigned int a, unsigned int b)
{
	unsigned int min;

	if (a <= b)
		min = a;
	else
		min = b;
	return (min);
}

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int	lcm;
	unsigned int	min;

	if (a == 0 || b == 0)
		return (0);
	min = ft_min(a, b);
	lcm = min;
	while (1)
	{
		if((lcm % a) == 0 && (lcm % b) == 0)
			return (lcm);
		lcm = lcm + min;
	}
	return (0);
}
