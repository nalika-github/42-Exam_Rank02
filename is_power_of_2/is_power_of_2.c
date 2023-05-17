/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_power_of_2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 15:41:15 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/04 15:53:58 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	is_power_of_2(unsigned int n)
{
	unsigned int	i;

	if (n == 0)
		return(0);
	if (n == 1)
		return(1);
	i = 0;
	while(i <= n / 2)
	{
		if (i * i == n)
			return(1);
		i++;
	}
	return (0);
}

// #include<stdio.h>

// int	main(void)
// {
// 	printf("%d\n", is_power_of_2(0));
// 	return(0);
// }
