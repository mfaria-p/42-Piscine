/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:56:24 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/28 16:06:14 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'A' || str[i] > 'Z')
		{
			return (0);
		}
		i++;
	}
	return (1);
}

/*int main(void)
{
	char	*str1;
	char	*str2;
	char	*str3;
	char	*str4;
	char	a;
	char	b;
	char	c;
	char	d;

	str1 = "ASDD";
	str2 = "qwedG";
	str3 = "132A2";
	str4 = "";
	a = '0' + ft_str_is_uppercase(str1);
	b = '0' + ft_str_is_uppercase(str2);
	c = '0' + ft_str_is_uppercase(str3);
	d = '0' + ft_str_is_uppercase(str4);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
	write(1, &d, 1);
}*/
