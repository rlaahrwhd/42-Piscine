/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/04 16:42:04 by mokim             #+#    #+#             */
/*   Updated: 2024/07/04 17:50:50 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	swap;

	swap = *a;
	*a = *b;
	*b = swap;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	count;
	int	a;

	while (count != size)
	{
		a = 0;
		while (a < size - 1)
		{
			if (tab[a] > tab[a + 1])
				ft_swap(&tab[a], &tab[a + 1]);
			a++;
		}
		count++;
	}
}
