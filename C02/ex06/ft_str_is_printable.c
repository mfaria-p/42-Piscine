/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 16:08:39 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/28 22:16:25 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 32 || str[i] > 126)
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char	str1[] = "\123 236fs";
	char    *str2;
	char    *str3;
	char    *str4;
	char	a;
	char	b;
	char	c;
	char	d;

	str2 = "\14adgA";
	str3 = "\31\21";
	str4 = "";
	a = '0' + ft_str_is_printable(str1);
	b = '0' + ft_str_is_printable(str2);
	c = '0' + ft_str_is_printable(str3);
	d = '0' + ft_str_is_printable(str4);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}*/
