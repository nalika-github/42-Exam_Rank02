/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 13:25:41 by ptungbun          #+#    #+#             */
/*   Updated: 2023/04/27 13:34:22 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned char	swap_bits(unsigned char octet)
{
	unsigned char c;
	unsigned char buf;

	c = 0;
	buf = octet;
	buf = buf >> 4;
	c = c | buf;
	buf = octet;
	buf = buf << 4;
	c = c | buf;
	return (c);
}
