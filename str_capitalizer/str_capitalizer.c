/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_capitalizer.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:22:26 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/19 16:48:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_upper(char c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	write(1, &c, 1);
}

void	ft_lower(char c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	write(1, &c, 1);
}

void	docapitalize(char *str)
{
	int	i;

	ft_upper(str[0]);
	i = 1;
	while (str[i])
	{
		if (str[i - 1] == ' ' && (str[i] >= 'a' && str[i] <= 'z'))
			ft_upper(str[i]);
		else if (str[i - 1] != ' ' && (str[i] >= 'A' && str[i] <= 'Z'))
			ft_lower(str[i]);
		else
			write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	int i;

	if (argc > 1)
	{
		i = 1;
		while (argv[i])
		{
			docapitalize(argv[i]);
			write(1, "\n", 1);
			i++;
		}
	}
	else
		write(1, "\n", 1);
	return (0);
}
