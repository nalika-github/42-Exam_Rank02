/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fprime.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 14:40:55 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/27 15:39:51 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	sign;
	int	num;

	i = 0;
	sign = 1;
	while (str[i] == ' ' || str[i] == '\t')
		i++;
	if (str[i] == '-')
	{
		sign = -1;
		i++;
	}
	else if (str[i] == '+')
		i++;
	num = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (num * 10) + (str[i] - '0');
		i++;
	}
	return(num * sign);
}

void	ft_prime(char *str)
{
	int		num;
	int		i;

	num = ft_atoi(str);
	while(num > 1)
	{
		i = 2;
		while (num % i != 0)
			i++;
		printf("%d", i);
		num = num / i;
		if (num > 1)
			printf("*");
	}
}

int	main(int argc, char **argv)
{
	if(argc == 2)
	{
			ft_prime(argv[1]);
	}
	printf("\n");
	return(0);
}
