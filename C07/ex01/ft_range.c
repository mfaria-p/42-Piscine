/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 23:01:53 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/06 23:31:08 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int	*array;
	int	i;

	i = 0;
	array = malloc((max - min) * sizeof(int));
	if (min >= max)
		array = NULL;
	while (i < (max - min))
	{
		array[i] = min + i;
		i++;
	}
	return (array);
}

/*int main(int ac, char **av)
{
	int	i;
	int	*array;

	i = 0;
	if (ac == 3)
	{
		array = ft_range(atoi(av[1]), atoi(av[2]));
		while (i < (atoi(av[2]) - atoi(av[1])))
		{
			printf("%i", array[i]);
			i++;
		}
	}
}*/
