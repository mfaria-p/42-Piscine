/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfaria-p <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 19:54:32 by mfaria-p          #+#    #+#             */
/*   Updated: 2023/09/12 11:36:21 by mfaria-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	check_for_separator(char str, char *charset)
{
	int	i;

	i = 0;
	if (str == '\0')
		return (1);
	while (charset[i])
	{
		if (charset[i] == str)
			return (1);
		i++;
	}
	return (0);
}

int	number_words(char *str, char *charset)
{
	int	i;
	int	words;

	words = 0;
	i = 0;
	while (str[i])
	{
		if (check_for_separator(str[i], charset) == 0
			&& check_for_separator(str[i + 1], charset) == 1)
			words++;
		i++;
	}
	return (words);
}

void	write_word(int words, char *str, char *charset, char **array)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && j <= words)
	{
		len = 0;
		while (check_for_separator(str[i], charset) == 1)
			i++;
		while (check_for_separator(str[i], charset) == 0)
		{
			len++;
			i++;
		}
		array[j] = (char *) malloc(sizeof (char) * (len));
		j++;
	}
}

void	write_word2(int words, char *str, char *charset, char **array)
{
	int	i;
	int	len;
	int	j;

	i = 0;
	j = 0;
	while (str[i] && j < words)
	{
		len = 0;
		while (check_for_separator(str[i], charset) == 1)
			i++;
		while (check_for_separator(str[i], charset) == 0)
		{
			array[j][len] = str[i];
			len++;
			i++;
		}
		array[j][len] = '\0';
		j++;
	}
	array[j] = NULL;
}

char	**ft_split(char *str, char *charset)
{
	int		words;
	char	**array;
	int		i;
	int		j;
	int		len;

	i = 0;
	j = 0;
	len = 0;
	words = number_words(str, charset);
	array = (char **) malloc(sizeof(char *) * (words + 1));
	write_word(words, str, charset, array);
	write_word2(words, str, charset, array);
	return (array);
}

/*int	main(void)
{
	char	**array;
	int	j;
	char str[] = "Todos os patinhos sabem bem nadar, ";
	char charset[] = "m n";

	j = 0;
	array = ft_split(str, charset);
	while (array[j] != 0)
	{
		printf("%s \n", array[j]);
		j++;
	}
}*/
