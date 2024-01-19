/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/31 15:54:10 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/01 21:55:33 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_atoi(char *str)
{
	int	i;
	int	s;
	int	num;

	i = 0;
	s = 1;
	num = 0;
	while (str[i] && ((str[i] >= 9 && str[i] <= 13) || (str[i] == 32)))
		i++;
	while (str[i] && (str[i] == '-' || str[i] == '+'))
	{
		if (str[i] == '-')
		{
			s = s * (-1);
		}
		i++;
	}
	while (str[i] && (str[i] <= '9' && str[i] >= '0'))
	{
		num = num * 10 + (str[i] - '0');
		i++;
	}
	return (num * s);
}

/*void	putnbr(int nb)
{
	char	c;

	if (nb == -2147483648)
	{
		write(1, "-2147483648", 11);
	}
	else if (nb < 0)
	{
		write(1, "-", 1);
		putnbr(-nb);
	}
	else if (nb <= 9)
	{
		c = '0' + nb;
		write(1, &c, 1);
	}
	else 
	{
		putnbr(nb / 10);
		putnbr(nb % 10);
	}
}*/

/*int main(int ac, char **av)
{
	int	a;
	int	 i;

	if (ac == 2)
	{
		a = ft_atoi(av[1]);
		printf("%d",a);
		putnbr(a);
	}
}*/
