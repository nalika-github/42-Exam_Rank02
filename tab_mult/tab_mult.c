/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab_mult.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 21:25:58 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/04 21:59:54 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int		atoi(char *nbr)
{
	int	num;
	int	i;

	num = 0;
	i = 0;
	while(nbr[i])
	{
		num = (num * 10) + (nbr[i] - '0');
		i++;
	}
	return (num);
}

void	ft_putnbr(int num)
{
	char	c;

	c = '0' + (num % 10);
	if (num / 10 > 0)
		ft_putnbr(num / 10);
	write(1, &c, 1);
}

void	tab_mult(int num)
{
	int	i;

	i = 1;
	while(i <= 9)
	{
		ft_putnbr(i);
		write(1, " x ", 3);
		ft_putnbr(num);
		write(1, " = ", 3);
		ft_putnbr(num * i);
		write(1, "\n", 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		tab_mult(atoi(argv[1]));
	else
		write(1, "\n", 1);
	return (0);
}

// int	main(void)
// {
// 	char	str[] = "123102";

// 	ft_putnbr(atoi(str));
// 	return(0);
// }
