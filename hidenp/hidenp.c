/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hidenp.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 17:13:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/05 17:29:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	hidenp(char *s1, char *s2)
{
	int	i;
	int	j;
	int	check;

	i = 0;
	j = 0;
	while(s1[i])
	{
		check = 0;
		while(check == 0 && s2[j])
		{
			if (s1[i] == s2[j])
				check = 1;
			j++;
		}
		if (check == 0)
		{
			write(1, "0", 1);
			return;
		}
		i++;
	}
	if (check == 1)
		write(1, "1", 1);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		hidenp(argv[1], argv[2]);
	write(1, "\n", 1);
	return(0);
}
