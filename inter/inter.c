/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 20:58:33 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/04 21:22:30 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int		ft_scan(char *s1, char c, int len)
{
	int	i;

	i = 0;
	while (s1[i] && i < len)
	{
		if(s1[i] == c)
			return (1);
		i++;
	}
	return (0);
}

void	inter(char *s1, char *s2)
{
	int	i;
	int len;

	len = 0;
	while (s2[len])
		len++;
	i = 0;
	while(s1[i])
	{
		if(ft_scan(s2, s1[i], len + 1) && !ft_scan(s1, s1[i], i))
			write(1, &s1[i], 1);
		i++;
	}
}

int		main(int argc, char **argv)
{
	if (argc == 3)
		inter(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
