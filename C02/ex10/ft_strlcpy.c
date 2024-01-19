/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 21:45:56 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/28 22:13:52 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	l;

	l = 0;
	i = 0;
	while (src[i] != '\0' && i < (size - 1))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	while (src[l] != '\0')
		l++;
	return (l);
}

/*int main(void)
{
	char	src[] = "olabananas";
	char	dest[4];
	unsigned int size;

	size = 4;
	printf("%d", ft_strlcpy(dest, src, size));
	printf("%s", dest);
}*/
