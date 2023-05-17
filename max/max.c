/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:43:01 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/04 12:54:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int* tab, unsigned int len)
{
	unsigned int	i;
	int	max;

	if (!tab)
		return(0);
	i = 1;
	max = tab[0];
	while (i < len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

// #include<stdio.h>

// int	main(void)
// {
// 	int	tab[] = {1, 2, 10, 4, 5};
// 	unsigned int	len = 5;

// 	printf("max = %d\n",max(tab, len));
// 	return(0);
// }
