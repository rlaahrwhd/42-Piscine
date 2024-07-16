/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_check.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/10 13:59:23 by mokim             #+#    #+#             */
/*   Updated: 2024/07/10 20:18:31 by sipark           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

extern int	g_col_up[4];
extern int	g_col_down[4];
extern int	g_row_left[4];
extern int	g_row_right[4];

int	ft_atoi(char *str)
{
	int	result;

	result = 0;
	while (*str)
	{
		if (*str < '0' || *str > '9')
			return (-1);
		result = result * 10 + (*str - '0');
		str++;
	}
	return (result);
}

int	parse_input2(int i, int num)
{
	if (i < 4)
		g_col_up[i] = num;
	else if (i < 8)
		g_col_down[i - 4] = num;
	else if (i < 12)
		g_row_left[i - 8] = num;
	else if (i < 16)
		g_row_right[i - 12] = num;
	return (0);
}

int	val_input(void)
{
	int	j;

	j = 0;
	while (j < 4)
	{
		if (g_col_up[j] < 1 || g_col_up[j] > 4 || g_col_down[j] < 1 || \
				g_col_down[j] > 4 || g_row_left[j] < 1 || \
				g_row_left[j] > 4 || g_row_right[j] < 1 || g_row_right[j] > 4)
			return (0);
		j++;
	}
	return (1);
}

int	parse_input(char *input)
{
	char	*str;
	int		i;
	int		num;

	str = input;
	i = 0;
	while (*str && i < 16)
	{
		num = 0;
		while (*str >= '0' && *str <= '9')
		{
			num = num * 10 + (*str - '0');
			str++;
		}
		parse_input2(i, num);
		while (*str && (*str < '0' || *str > '9'))
			str++;
		i++;
	}
	if (i != 16 || val_input() != 1)
		return (0);
	return (1);
}
