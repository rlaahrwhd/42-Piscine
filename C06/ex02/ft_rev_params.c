/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 21:28:58 by mokim             #+#    #+#             */
/*   Updated: 2024/07/14 22:13:43 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}

int	main(int argc, char *argv[])
{
	int	a;

	a = argc;
	if (argc != 0)
	{
		while (a > 1)
		{
			ft_putchar(argv[a - 1]);
			write(1, "\n", 1);
			a--;
		}
	}
	return (0);
}
