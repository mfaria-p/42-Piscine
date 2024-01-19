/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 14:27:56 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/04 23:29:43 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
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

/*#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%i", ft_is_prime(atoi(av[1])));
}*/
