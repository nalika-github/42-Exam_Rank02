/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_wstr.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:22:07 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/05 16:29:29 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>
#include<stdio.h>

int	ft_isblank(char c)
{
	if(c == ' ' || c == '\t')
		return(1);
	return (0);
}

int	w_count(char *str)
{
	int	index;
	int	wc;
	int	i;

	i = 0;
	index = 0;
	wc = 0;
	while(str[i])
	{
		if (!ft_isblank(str[i]) && index == 0)
		{
			wc++;
			index = 1;
		}
		if (ft_isblank(str[i]))
			index = 0;
		i++;
	}
	return (wc);
}

void	print_word(char *str, int i)
{
	while(str[i] && !ft_isblank(str[i]))
	{
		write(1, &str[i], 1);
		i++;
	}
}

void	rev_wstr(char *str)
{
	int	i;
	int	wc;

	wc = w_count(str);
	if (wc == 0)
		return;
	i = 0;
	while (str[i])
		i++;
	while (i > 0)
	{
		if (!ft_isblank(str[i]) && ft_isblank(str[i - 1]))
		{
			print_word(str, i);
			write(1, " ", 1);
			wc--;
		}
		i--;
	}
	if(wc == 1)
		print_word(str, i);
}

int		main(int argc, char **argv)
{
	if (argc == 2)
		rev_wstr(argv[1]);
	write(1, "\n", 1);
	return (0);
}
