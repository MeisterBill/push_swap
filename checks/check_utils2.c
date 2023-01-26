/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_utils2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: artvan-d <artvan-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/26 12:11:09 by artvan-d          #+#    #+#             */
/*   Updated: 2023/01/26 12:14:34 by artvan-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	ft_nbcmp(char *nb1, char *nb2)
{
	return (ft_strtoi(nb1) == ft_strtoi(nb2));
}

static int	check_dup(char **argv)
{
	int	i;
	int	j;

	i = 0;
	if (!argv)
		return (0);
	while (argv[i])
	{
		j = i + 1;
		while (argv[j])
		{
			if (ft_nbcmp(argv[i], argv[j]))
				return (1);
			j++;
		}
		i++;
	}
	return (0);
}
