/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tab.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/23 13:59:50 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/26 15:19:35 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

char	**ft_free_tab(char **tab)
{
	int	i;

	if (tab == NULL)
		return (NULL);
	if (tab)
	{
		i = 0;
		while (tab[i])
		{
			free(tab[i]);
			i++;
		}
		free (tab);
	}
	return (NULL);
}

int	ft_size_tab(char **tab)
{
	int	i;

	i = 0;
	if (!tab)
		return (0);
	while (tab[i] != NULL)
		i++;
	return (i);
}

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
	tab[i - 1] = NULL;
	return (tab);
}

char	**fill_tab_with_one(char **argv)
{
	char	**tab;

	tab = ft_split(argv[1], ' ');
	if (!tab || !tab[0])
		return (NULL);
	if (check_argv(tab) == 0)
	{
		if (tab[0])
			ft_free_tab(tab);
		else
			free(tab);
		return (NULL);
	}
	return (tab);
}
