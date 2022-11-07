/************************************************************************* */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_nbr_in_dict.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/23 14:32:07 by baalbade          #+#    #+#             */
/*   Updated: 2022/07/24 15:52:52 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_check_char(char c)
{
	//if ((c >= 'a' && c <= 'z') ||  (c >= 'A' && c <= 'Z'))
	if (c >= 33 && c <= 126)
		return (1);
	return (0);
}

int	ft_get_nbr_position(char *buf, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	while (buf[i])
	{
		j = 0;
		if (to_find[j] == buf[i])
		{
			while (to_find[j] && buf[i + j] && to_find[j] == buf[i + j])
				j++;
		}
		if (!to_find[j])
			break ;
		i++;
	}
	return (i);
}

int	ft_find_word_len(char *buf, int pos)
{
	int	i;
	int	word_len;

	word_len = 0;
	i = pos;
	while (buf[i] != '\n')
	{
		if ((buf[i] >= 32 && buf[i] <= 47) || (buf[i] >= 58 && buf[i] <= 126))
			word_len++;
		i++;
	}
	return (word_len);
}

char	*ft_get_final_word(char *buf, int pos, int word_len)
{
	char	*word;
	int		i;
	int		j;

	word = (char *)malloc(sizeof(char) * word_len + 1);
	j = 0;
	i = pos;
	while (buf[i] != '\n')
	{
		if ((buf[i] >= 32 && buf[i] <= 47) || (buf[i] >= 58 && buf[i] <= 126))
		{
			word[j] = buf[i];
			j++;
		}
		i++;
	}
	word[j] = '\0';
	return (word);
}

char	*ft_trim_final_word(char *word)
{
	int		i;
	int		j;
	char	*final_word;

	final_word = (char *)malloc(sizeof(char) * ft_strlen(word) + 1);
	i = 0;
	j = 0;
	while (word[i])
	{
		if ((word[i] == ':' || word[i] == ' ' || word[i] == '\t') && (word[i + 1] == ' ' || word[i + 1] == '\t'))
			;
		else if (word[i] >= 32 && word[i] <= 126)
		{
			final_word[j] = word[i];
			j++;
		}
		i++;
	}
	final_word[j] = '\0';
	return (final_word);
}
