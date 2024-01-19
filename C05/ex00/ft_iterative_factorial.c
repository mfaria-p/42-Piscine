/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/02 10:58:27 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/04 16:03:03 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
//#include <stdlib.h>

int	ft_iterative_factorial(int nb)
{
	int	factorial;

	if (nb < 0)
		return (0);
	else
	{
		factorial = 1;
		while (nb > 1)
		{
			factorial = factorial * nb;
			nb--;
		}
		return (factorial);
	}
}

/*int main(int ac, char **av)
{
	int b;
	if (ac == 2)
	{
		printf("%d", ft_iterative_factorial(atoi(av[1])));
	}
}*/
