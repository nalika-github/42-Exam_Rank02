/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 12:57:36 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/04 13:52:09 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int start, int end)
{
	int	len;
	int	i;
	int	*ret;

	len = start - end;
	if (len < 0)
		len = (-1 * len) + 1;
	else
		len = len + 1;
	ret = malloc(sizeof(int) * (len));
	i = 0;
	while (i < len)
	{
		ret[i] = start;
		i++;
		if (start > end)
			start--;
		else
			start++;
	}
	return(ret);
}

// int	main(void)
// {
// 	int	len;
// 	int	start = 3;
// 	int	end = -1;
// 	int	*toprint;
// 	int	i;

// 	len = start - end;
// 	if (len < 0)
// 		len = (-1 * len) + 1;
// 	else
// 		len = len + 1;
// 	printf("len = %d\n", len);
// 	toprint = ft_range(start, end);
// 	i = 0;
// 	while (i < len)
// 	{
// 		printf("[%d] = %d\n", i, toprint[i]);
// 		i++;
// 	}
// 	return(0);
// }
