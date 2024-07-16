/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 22:14:01 by mokim             #+#    #+#             */
/*   Updated: 2024/07/14 23:52:08 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' || s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	ft_swap(char **a, char **b)
{
	char	*temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

int	main(int argc, char *argv[])
{
	int	a;
	int	b;

	a = argc - 1;
	while (a)
	{
		b = 1;
		while (b < a)
		{
			if (ft_strcmp(argv[b], argv[b + 1]) > 0)
			{
				ft_swap(&argv[b], &argv[b + 1]);
			}
			b++;
		}
		a--;
	}
	a = 1;
	while (a < argc)
	{
		ft_putstr(argv[a++]);
		write(1, "\n", 1);
	}
	return (0);
}
