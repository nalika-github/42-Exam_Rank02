/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcspn.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 14:28:56 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/11 14:41:39 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

size_t	ft_strcspn(const char *s, const char *reject)
{
	size_t	i;
	size_t	j;

	i = 0;
	while(s[i])
	{
		j = 0;
		while (reject[j])
		{
			if (s[i] == reject[j])
				return (i);
			j++;
		}
		i++;
	}
	return (i);
}


// #include<string.h>
// #include<stdio.h>
// #include<unistd.h>

// int	main(void)
// {
// 	printf("my return = %ld\n", ft_strcspn("12345", "6"));
// 	printf("real return = %ld\n", strcspn("12345", "6"));
// 	return(0);
// }
