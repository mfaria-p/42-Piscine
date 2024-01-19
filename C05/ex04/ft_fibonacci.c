/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/03 13:25:27 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/03 13:59:29 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_fibonacci(int index)
{
	int	number;

	if (index < 0)
		return (-1);
	else if (index == 0)
		return (0);
	else if (index == 1)
		return (1);
	else
	{
		number = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
		return (number);
	}
}

/*#include <stdlib.h>
#include <stdio.h>

int	 main(int ac, char **av)
{
	if (ac == 2)
		printf("%i",ft_fibonacci(atoi(av[1])));
}*/
