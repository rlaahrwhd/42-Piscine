/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/06 17:50:56 by mokim             #+#    #+#             */
/*   Updated: 2024/07/07 17:21:55 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

int	ft_strlen(char *str)
{
	int	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

char	*ft_get_hex(char *str, int count)
{
	char	*hex;
	int		a;
	int		b;

	hex = "0123456789abcdef";
	a = str[count] % 16;
	b = str[count] / 16;
	ft_putchar(hex[b]);
	ft_putchar(hex[a]);
	return (0);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (i <= ft_strlen(str))
	{
		if (str[i] <= 31 || str[i] == 127)
		{
			if (i == ft_strlen(str))
			{
				break ;
			}
			ft_putchar('\\');
			ft_get_hex(str, i);
		}
		else
			ft_putchar(str[i]);
		i++;
	}
}
