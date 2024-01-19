/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 14:18:37 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/31 17:01:05 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
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
	char str5[] = "ce4";

	printf("%d, ",ft_strncmp(str1,str2,5));
	printf("%d, ",ft_strncmp(str1,str3,5));
	printf("%d, ",ft_strncmp(str1,str4,5));
	printf("%d",ft_strncmp(str1,str5,5));
}*/
