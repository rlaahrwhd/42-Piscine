/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 23:53:02 by mokim             #+#    #+#             */
/*   Updated: 2024/07/01 11:13:23 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_array(int n)
{
	int	i;
	int*	arr = (int*)malloc(sizeof(int) * size);

	i = 0;
	while (i <= n)
	{
		arr[i] = 48;
	}
}

void	ft_print_combn(int n)
{
	ft_array(n);
}

int	main(void)
{
	ft_print_combn(2);
}
