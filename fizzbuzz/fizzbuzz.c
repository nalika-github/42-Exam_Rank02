/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:13:25 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/04 15:39:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putnbr(int nbr)
{
	char	c;

	c = '0' + (nbr % 10);
	nbr = nbr / 10;
	if (nbr > 0)
		ft_putnbr(nbr);
	write(1, &c, 1);
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while(str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(void)
{
	int		i;

	i = 1;
	while (i <= 100)
	{
		if(i % 3 == 0 && i % 5 == 0)
			ft_putstr("fizzbuzz");
		else if(i % 3 == 0)
			ft_putstr("fizz");
		else if (i % 5 == 0)
			ft_putstr("buzz");
		else
			ft_putnbr(i);
		write(1, "\n", 1);
		i++;
	}
}
