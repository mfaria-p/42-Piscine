/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:08:55 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/02 14:40:43 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_iterative_power(int nb, int power)
{
	int	base;

	base = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
	{
		power--;
		while (power > 0)
		{
			nb = base * nb;
			power--;
		}
		return (nb);
	}
}

/*#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 3)
		printf("%i", ft_iterative_power(atoi(av[1]), atoi(av[2])));
}*/
