/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 15:04:38 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/04 16:10:20 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	find_prime(int nb)
{
	int	num;

	num = 2;
	if (nb <= 1)
		return (0);
	else
	{
		while (num <= nb / num)
		{
			if (nb % num == 0)
				return (0);
			num++;
		}
		return (1);
	}
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 1)
		return (2);
	else
	{
		while (!(find_prime(nb)))
			nb++;
		return (nb);
	}
}

/*#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%i",ft_find_next_prime(atoi(av[1])));
}*/
