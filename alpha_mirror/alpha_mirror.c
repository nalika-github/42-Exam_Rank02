/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   alpha_mirror.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:54:34 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/27 16:20:10 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	amir(char *str)
{
	int		i;
	char	c;

	i = 0;
	while (str[i])
	{
		c = str[i];
		if(str[i] >= 'a' && str[i] <= 'm')
			c = 'm' + ('n' - str[i]);
		else if(str[i] >= 'n' && str[i] <= 'z')
			c = 'n' - (str[i] - 'm');
		else if(str[i] >= 'A' && str[i] <= 'M')
			c = 'M' + ('N' - str[i]);
		else if(str[i] >= 'N' && str[i] <= 'Z')
			c = 'N' - (str[i] - 'M');
		write(1, &c, 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		amir(argv[1]);
	write(1, "\n", 1);
	return(0);
}
