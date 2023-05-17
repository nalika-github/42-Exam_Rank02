/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   last_word.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 10:45:22 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/26 11:16:15 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	last_word(char *str)
{
	int	i;

	i = 0;
	while(str[i])
		i++;
	while(str[i] == '\t' || str[i] == ' ' || str[i] == '\0')
		i--;
	while(str[i - 1] != '\t' && str[i - 1] != ' ' && i != 0)
		i--;
	while(str[i] && str[i] != '\t' && str[i] != ' ')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char **argv)
{
	if (argc == 2)
		last_word(argv[1]);
	write (1, "\n", 1);
	return (0);
}
