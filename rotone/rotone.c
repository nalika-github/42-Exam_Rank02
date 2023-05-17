/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rotone.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 13:47:20 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/11 14:20:02 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

void	rotone(char *str)
{
	int		i;
	char	c;

	i = 0;
	while(str[i])
	{
		c = str[i];
		if (str[i] == 'z' ||str[i] == 'Z')
			c = str[i] - 25;
		else if (((str[i] >= 'a') && (str[i] <= 'y')) || ((str[i] >= 'A') && (str[i] <= 'Y')))
			c = str[i] + 1;
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		rotone(argv[1]);
	write(1, "\n", 1);
	return (0);
}
