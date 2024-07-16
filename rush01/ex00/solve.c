/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   solve.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 18:54:33 by mokim             #+#    #+#             */
/*   Updated: 2024/07/10 20:01:48 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

extern int	g_grid[4][4];

int		is_valid(int row, int col);

int	solve(int row, int col)
{
	int	next_row;
	int	next_col;
	int	num;

	if (row == 4)
		return (1);
	if (col == 3)
		next_row = row + 1;
	else
		next_row = row;
	next_col = (col + 1) % 4;
	num = 1;
	if (g_grid[row][col] != 0)
		return (solve(next_row, next_col));
	while (num <= 4)
	{
		g_grid[row][col] = num;
		if (is_valid(row, col) && solve(next_row, next_col))
			return (1);
		g_grid[row][col] = 0;
		num ++;
	}
	return (0);
}

void	print_grid(void)
{
	char	num_str[2];
	int		i;
	int		j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			num_str[0] = g_grid[i][j] + '0';
			num_str[1] = ' ';
			write(1, num_str, 2);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
