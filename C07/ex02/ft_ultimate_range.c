/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/06 12:03:29 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/07 14:35:47 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *) malloc ((max - min) * sizeof(int));
	if (*range == 0)
		return (-1);
	else
	{
		while (i < (max - min))
		{
			(*range)[i] = min + i;
			i++;
		}
		return (max - min);
	}
}

/*int main(void)
{
	int	**ptr;
	int	*ptr1;
	int	i;

	i = 0;
	ptr = &ptr1;
	printf("%i", ft_ultimate_range(ptr, 32, 36));
	while (i < (36 - 32))
	{
		printf("%i ", ptr1[i]);
		i++;
	}
	free(*ptr);
}*/
