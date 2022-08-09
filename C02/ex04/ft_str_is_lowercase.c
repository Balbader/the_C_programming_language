/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/09 17:32:56 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/09 17:34:05 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_lower(char c)
{
	if (!(c >= 'a' && c <= 'z'))
		return (1);
	return (0);
}

int	ft_str_is_alpha(char *str)
{
	int	i;

	if (str[i] == '\0')
		return (1);
	i = 0;
	while (str[i])
	{
		if (ft_is_lower(str[i]))
			return (0);
		i++;
	}
	return (1);
}
