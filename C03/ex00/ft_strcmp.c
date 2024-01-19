/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 13:41:02 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/30 14:17:06 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (!(s1[i] == '\0' && s2[i] == '\0'))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*int main(void)
{
	char str1[] = "cenase";
	char str2[] = "cenasi";
	char str3[] = "";
	char str4[] = "cen";
	char str5[] = "cenase";

	printf("%d, ", ft_strcmp(str1, str2));
	printf("%d, ", ft_strcmp(str1, str3));
	printf("%d, ", ft_strcmp(str1, str4));
	printf("%d", ft_strcmp(str1, str5));
}*/
