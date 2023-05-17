/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   flood_fill.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/04 13:55:24 by ptungbun          #+#    #+#             */
/*   Updated: 2023/05/04 14:46:03 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdlib.h>
// #include <stdio.h>

typedef struct  s_point
{
	int	x;
	int	y;
}	t_point;

void	fill(char **tab, t_point size, int bx, int by, char c)
{
	if (bx >= size.x || bx < 0 || by >= size.y || by < 0 || tab[by][bx] == 'F' || tab[by][bx] != c)
		return;
	if (tab[by][bx] == c)
		tab[by][bx] = 'F';
	fill(tab, size, bx + 1, by, c);
	fill(tab, size, bx - 1, by, c);
	fill(tab, size, bx, by + 1, c);
	fill(tab, size, bx, by - 1, c);

}

void	flood_fill(char **tab, t_point size, t_point begin)
{
	if (!tab)
		return;
	if (begin.x > size.x || begin.x < 0 || begin.y > size.y || begin.y < 0)
		return;
	fill(tab, size, begin.x, begin.y, tab[begin.y][begin.x]);
}

// char** make_area(char** zone, t_point size)
// {
// 	char** new;

// 	new = malloc(sizeof(char*) * size.y);
// 	for (int i = 0; i < size.y; ++i)
// 	{
// 		new[i] = malloc(size.x + 1);
// 		for (int j = 0; j < size.x; ++j)
// 			new[i][j] = zone[i][j];
// 		new[i][size.x] = '\0';
// 	}
// 	return new;
// }

// int main(void)
// {
// 	t_point size = {8, 5};
// 	char *zone[] = {
// 		"11111111",
// 		"10001001",
// 		"10010001",
// 		"10110001",
// 		"11100001",
// 	};

// 	char**  area = make_area(zone, size);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	printf("\n");

// 	t_point begin = {6, 4};
// 	flood_fill(area, size, begin);
// 	for (int i = 0; i < size.y; ++i)
// 		printf("%s\n", area[i]);
// 	return (0);
// }
