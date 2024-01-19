/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 14:42:34 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/03 13:23:09 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_recursive_power(int nb, int power)
{
	int	number;

	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else if (power > 1)
	{
		number = nb * ft_recursive_power(nb, (power - 1));
		power--;
		return (number);
	}
	else
		return (nb);
}

/*
#include <stdlib.h>
#include <stdio.h>

int main(int ac, char **av)
{
	if (ac == 3)
		printf("%i",ft_recursive_power(atoi(av[1]),atoi(av[2])));
}
*/
