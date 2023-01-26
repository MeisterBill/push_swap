/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 14:23:09 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/26 12:12:18 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_if_int(const char *tab)
{
	long	nb;
	int		minus;
	int		i;

	minus = -1;
	nb = 0;
	i = 0;
	if (tab[i] == '-' || tab[i] == '+')
	{
		if (tab[i] == '-')
			minus *= -1;
		i++;
	}
	while (tab[i] >= 48 && tab[i] <= 57)
	{
		nb = nb * 10 + tab[i] - 48;
		if (nb * minus > 2147483647)
			return (-1);
		if (nb * minus < -2147483647)
			return (-1);
		i++;
	}
	if (tab[i] || (minus == 1 && i == 1) || i == 0)
		return (0);
	return (1);
}

int	check_if_sign(char c)
{
	if (c == '+' || c == '-')
		return (1);
	return (0);
}

int	check_if_digit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	return (0);
}

int	check_if_nbr(char *tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	if (check_if_sign(tab[i]) == 1 && tab[i + 1] != '\0')
		i++;
	while (tab[i] && check_if_digit(tab[i]) == 1)
		i++;
	if (tab[i] != '\0' && check_if_digit(tab[i]) == 0)
		return (0);
	return (1);
}

static int	nb_of_zero_inargv(char *tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	if (check_if_sign(tab[i]) == 1)
		i++;
	while (tab[i] && tab[i] == '0')
		i++;
	if (tab[i] != '\0')
		return (0);
	return (1);
}
