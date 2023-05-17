/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_prime_sum.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:46:45 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/11 15:44:01 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	nbr;
	int	sign;

	i = 0;
	sign = 1;
	while(str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	if (str[i] == '+')
		i++;
	nbr = 0;
	while(str[i])
	{
		nbr = (nbr * 10) + (str[i] - '0');
		i++;
	}
	return (sign * nbr);
}

void	ft_putnbr(int nbr)
{
	char c;

	if (nbr < 0)
	{
		c = '-';
		write(1, &c, 1);
		nbr = nbr * -1;
	}
	if (nbr > 0)
	{
		ft_putnbr(nbr / 10);
		c = (nbr % 10) + '0';
		write(1, &c, 1);
	}
}

int	is_prime(int nbr)
{
	int	i;

	i = 2;
	while (i <= nbr / 2)
	{
		if (nbr % i == 0)
			return(0);
		i++;
	}
	return (1);
}

void	add_prime_sum(char *str)
{
	int	nbr;
	int	sum;
	int	i;

	nbr = ft_atoi(str);
	if (nbr < 0)
	{
		nbr = 0;
		ft_putnbr(nbr);
	}
	if (nbr == 2)
	{
		ft_putnbr(nbr);
		return;
	}
	i = 2;
	sum = 0;
	while (i <= nbr)
	{
		if (is_prime(i))
			sum = sum + i;
		i++;
	}
	ft_putnbr(sum);
}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		add_prime_sum(argv[1]);
		write(1, "\n", 1);
	}
	else
		write(1, "0\n", 2);
	return (0);
}
