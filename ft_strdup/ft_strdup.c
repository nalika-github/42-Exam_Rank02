/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/26 13:44:08 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/26 13:58:41 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdlib.h>
// #include<unistd.h>

static size_t	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*str;
	int		i;

	if (!src)
		return (NULL);
	str = malloc((ft_strlen(src) + 1) * sizeof(char));
	i = 0;
	while (src[i])
	{
		str[i] = src[i];
		i++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	*str;
// 	int		i;

// 	str = ft_strdup("1234");
// 	i = 0;
// 	while(str[i])
// 	{
// 		write(1, &str[i], 1);
// 		i++;
// 	}
// 	free(str);
// 	return (0);
// }
