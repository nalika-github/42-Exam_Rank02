/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parasum.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:55:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/04 16:02:34 by marvin           ###   ########.fr       */
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

int	main(int argc, char **argv)
{
	if (argc > 1)
		ft_putnbr(argc - 1);
	else
		write(1, "0", 1);
	write(1, "\n", 1);
	if(!argv)
		return (0);
}
