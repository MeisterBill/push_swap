/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:59:32 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/23 15:14:02 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

int	check_argv(char **tab)
{
	int	i;
	int	nb_of_zero;

	nb_of_zero = 0;
	i = 0;
	if (!tab)
		return (0);
	while (tab[i])
	{
		if (check_if_int(tab[i]) == 0 || check_if_int(tab[i]) == -1)
			return (0);
		if (check_if_nbr(tab[i]) == 0)
			return (0);
		if (nb_of_zero_inargv(tab[i]))
			nb_of_zero += 1;
		i++;
	}
	if (check_dup(tab) == 1)
		return (0);
	if (nb_of_zero > 1)
		return (0);
	return (1);
}

char	**filltab_and_checks(int ac, char **argv)
{
	char	**tab;

	if (ac > 2)
	{
		tab = filltab_with_more(ac, argv);
		if (check_argv(tab) == 0)
		{
			free(tab);
			return (NULL);
		}
	}
	else
		tab = filltab_with_one(argv);
	return (tab);
}
