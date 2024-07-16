/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/11 21:18:49 by mokim             #+#    #+#             */
/*   Updated: 2024/07/11 21:27:59 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char a)
{
	write(1, &a, 1);
}

void	as(unsigned int nbr, int a, char *base)
{
	unsigned int	c;
	unsigned int	b;
	char			*based;

	based = base;
	c = nbr / a;
	b = nbr % a;
	if (c != 0)
		as((unsigned int) c, a, base);
	ft_putchar(based[b]);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int	i;
	int	q;

	i = 0;
	while (base[i] != '\0')
	{
		q = 1;
		if (base[i] == '-' || base[i] == '+')
			return ;
		while (base[i + q] != '\0')
		{
			if (base[i] == base[i + q])
				return ;
			q++;
		}
		i++;
	}
	if (i <= 1)
		return ;
	if (nbr < 0)
	{
		write(1, "-", 1);
		nbr = -nbr;
	}
	if (i >= 2)
		as(nbr, i, base);
}
