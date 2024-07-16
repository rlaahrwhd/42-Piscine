/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush01.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: minpark <minpark@student.42gyeongsan.      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/02 13:23:53 by minpark           #+#    #+#             */
/*   Updated: 2024/07/03 13:58:04 by minpark          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	makerow(int try, char a, char b, char c)
{
	int	i;

	i = 1;
	while (i <= try)
	{
		if (i == 1)
			ft_putchar(a);
		else
		{
			if (i < try)
			{
				ft_putchar(b);
			}
			else
			{
				ft_putchar(c);
			}
		}	
		i++;
	}
	ft_putchar('\n');
}

void	rush(int num1, int num2)
{
	int	row;

	if (num1 <= 0 || num2 <= 0)
	{
		return ;
	}
	row = num2 - 2;
	makerow(num1, '/', '*', '\\');
	while (row > 0)
	{
		makerow(num1, '*', ' ', '*');
		row--;
	}
	if (num2 > 1)
	{
		makerow(num1, '\\', '*', '/');
	}
}
