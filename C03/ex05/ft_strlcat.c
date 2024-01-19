/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 17:57:29 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/08/30 21:46:32 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	d;
	unsigned int	s;
	unsigned int	i;

	i = 0;
	s = 0;
	d = 0;
	while (dest[d] != '\0')
		d++;
	while (src[s] != '\0')
		s++;
	if (size <= d)
		return (s + size);
	else
	{
		while ((src[i] != '\0') && (i < (size - d - 1)))
		{
			dest[d + i] = src[i];
			i++;
		}
		dest[d + i] = '\0';
		return (s + d);
	}
}

/*int main(void)
{
	char	dest[18] = "A Mariana e";
	char	src[] = " doidasergawf";
	int	size = 0;

	printf("%u", ft_strlcat(dest, src, size));
	printf("%s",dest);
}*/
