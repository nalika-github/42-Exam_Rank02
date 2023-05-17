/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 16:41:53 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/05 16:57:42 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

void	do_op(char *nbr1, char op, char *nbr2)
{
	int	nbr;

	if (op == '*')
		nbr = atoi(nbr1) * atoi(nbr2);
	if (op == '/')
		nbr = atoi(nbr1) / atoi(nbr2);
	if (op == '%')
		nbr = atoi(nbr1) % atoi(nbr2);
	if (op == '+')
		nbr = atoi(nbr1) + atoi(nbr2);
	if (op == '-')
		nbr = atoi(nbr1) - atoi(nbr2);
	printf("%d", nbr);
}

int	main(int argc, char **argv)
{
	if (argc == 4)
		do_op(argv[1], argv[2][0], argv[3]);
	printf("\n");
	return(0);
}
