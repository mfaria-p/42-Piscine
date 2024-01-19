/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:35:57 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/28 15:48:47 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < 'a' || str[i] > 'z')
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
	char	a;
	char	b;
	char	c;

	str1 = "";
	str2 = "asdf";
	str3 = "sAsad";
	a = '0' + ft_str_is_lowercase(str1);
	b = '0' + ft_str_is_lowercase(str2);
	c = '0' + ft_str_is_lowercase(str3);
	write(1, &a, 1);
	write(1, &b, 1);
	write(1, &c, 1);
}*/
