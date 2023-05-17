/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_bits.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/19 15:01:53 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/19 15:21:18 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print_bits(unsigned char octet)
{
	int	scan;

	scan = 128;
	while(scan > 0)
	{
		if (scan & octet)
			write(1, "1", 1);
		else
			write(1, "0", 1);
		scan = scan >> 1;
	}
}
