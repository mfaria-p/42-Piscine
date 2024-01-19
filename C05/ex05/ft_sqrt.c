/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:59:54 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/04 16:04:42 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_sqrt(int nb)
{
	int	number;

	number = 1;
	if (nb > 2147395600)
		return (0);
	else if (nb == 0)
		return (0);
	else if (nb > 0)
	{
		while (nb > number * number)
			number++;
		if (nb == number * number)
			return (number);
		else
			return (0);
	}
	else
		return (0);
}

/*#include <stdio.h>
#include <stdlib.h>

int main(int ac, char **av)
{
	if (ac == 2)
		printf("%i", ft_sqrt(atoi(av[1])));
}*/
