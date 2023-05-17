/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:32:45 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/05 18:22:27 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include<stdio.h>

int		ft_asize(int nbr)
{
	int	size;

	size = 0;
	if(nbr < 0)
	{
		nbr = nbr * -1;
		size++;
	}
	while (nbr > 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

char	*ft_itoa(int nbr)
{
	char	*str;
	int		i;

	if (nbr == 0)
	{
		str = malloc(sizeof(char) * 2);
		str[0] = '0';
		str[1] = '\0';
		return(str);
	}
	str = malloc(sizeof(char) * (ft_asize(nbr) + 1));
	i = 0;
	while (i <= ft_asize(nbr))
	{
		str[i] = '\0';
		i++;
	}
	if(nbr < 0)
	{
		str[0] = '-';
		nbr = -1 * nbr;
	}
	i = i - 2;
	while (nbr > 0)
	{
		str[i] = '0' + nbr % 10;
		nbr = nbr / 10;
		i--;
	}
	return(str);
}

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	return (0);
// }
