/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: baalbade <baalbade@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/14 15:44:32 by baalbade          #+#    #+#             */
/*   Updated: 2022/08/14 15:44:34 by baalbade         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int     ft_sqrt(int nb)
{
    int     res;
    int     i;

    i = 0;
    res = 0;
    while (i < nb)
    {
        if (res == nb)
            return (i - 1);
        else
            res = i * i;
        i++;
    }
    return (0);
}
