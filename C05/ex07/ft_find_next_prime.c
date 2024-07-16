/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mokim <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/14 20:14:30 by mokim             #+#    #+#             */
/*   Updated: 2024/07/14 20:22:59 by mokim            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_find_next_prime(int nb)
{
	int	a;

	a = 2;
	if (nb <= 1)
		return (ft_find_next_prime(nb + 1));
	while (a <= nb / 2)
	{
		if (nb % a == 0)
			return (ft_find_next_prime(nb + 1));
		a++;
	}
	return (nb);
}
