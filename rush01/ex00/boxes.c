/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   boxes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 17:32:44 by mokim             #+#    #+#             */
/*   Updated: 2024/07/10 20:14:49 by sipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	g_col_up[4];
int	g_col_down[4];
int	g_row_left[4];
int	g_row_right[4];
int	g_grid[4][4];

int	count_visible(int *line)
{
	int	i;
	int	count;
	int	max_height;

	i = 0;
	count = 1;
	max_height = line[0];
	while (++i < 4)
	{
		if (line[i] > max_height)
		{
			count++;
			max_height = line[i];
		}
	}
	return (count);
}

int	check_row(int row)
{
	int	temp[4];
	int	i;

	i = 0;
	while (i < 4)
	{
		temp[i] = g_grid[row][i];
		i++;
	}
	if (count_visible(temp) != g_row_left[row])
		return (0);
	i = 0;
	while (i < 4)
	{
		temp[i] = g_grid[row][3 - i];
		i++;
	}
	if (count_visible(temp) != g_row_right[row])
		return (0);
	return (1);
}

int	check_col(int col)
{
	int	temp[4];
	int	i;

	i = 0;
	while (i < 4)
	{	
		temp[i] = g_grid[i][col];
		i++;
	}
	if (count_visible(temp) != g_col_up[col])
		return (0);
	i = 0;
	while (i < 4)
	{
		temp[i] = g_grid[3 - i][col];
		i++;
	}
	if (count_visible(temp) != g_col_down[col])
		return (0);
	return (1);
}

int	is_valid(int row, int col)
{
	int	i;

	i = 0;
	while (i < 4)
	{
		if (i != col && g_grid[row][i] == g_grid[row][col])
			return (0);
		if (i != row && g_grid[i][col] == g_grid[row][col])
			return (0);
		i++;
	}
	if (col == 3 && !check_row(row))
		return (0);
	if (row == 3 && !check_col(col))
		return (0);
	return (1);
}
