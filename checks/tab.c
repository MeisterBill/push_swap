/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:59:50 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/23 16:25:00 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**filltab_with_more(int ac, char **argv)
{
	char	**tab;
	int		i;

	i = 1;
	if (!argv)
		return (NULL);
	tab = (char **)malloc(sizeof(char *) * ac);
	if (!tab)
		return (NULL);
	while (i < ac)
	{
		tab[i - 1] = argv[i];
		i++;
	}
	/* ESSAYER AVEC tab[i - 1] a la ligne en dessous */
	tab[i] = NULL;
	return (tab);
}
