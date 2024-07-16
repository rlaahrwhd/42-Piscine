/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/09 01:17:21 by mokim             #+#    #+#             */
/*   Updated: 2024/07/10 21:08:50 by sipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

extern int	g_grid[4][4];

int		parse_input(char *input);
int		solve(int row, int col);

void	print_grid(void);

int	main(int argc, char *argv[])
{
	if (argc != 2)
	{
		write(1, "Invalid input", 14);
		return (1);
	}
	if (!parse_input(argv[1]))
	{
		write(1, "Invalid input", 14);
		return (1);
	}
	if (!solve(0, 0))
	{
		write(1, "No answer", 10);
		return (1);
	}
	print_grid();
	return (0);
}
