/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rot_13.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 14:45:03 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/19 14:58:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	rot_13(char c)
{
	if ((c >= 'A' && c <= 'M') || (c >= 'a' && c <= 'm'))
		ft_putchar(c + 13);
	else if ((c >= 'N' && c <= 'Z') || (c >= 'n' && c <= 'z'))
		ft_putchar(c - 13);
	else
		ft_putchar(c);
}

int	main(int argc, char **argv)
{
	int	i;

	if (argc == 2)
	{
		i = 0;
		while(argv[1][i])
		{
			rot_13(argv[1][i]);
			i++;
		}
	}
	ft_putchar('\n');
	return (0);
}
