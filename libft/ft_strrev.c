/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kialvare <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/26 12:15:18 by kialvare          #+#    #+#             */
/*   Updated: 2016/10/26 12:15:23 by kialvare         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/libft.h"

char	*ft_strrev(char *str)
{
	char	t;
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (str[n])
		n++;
	n--;
	while (i < n)
	{
		t = str[n];
		str[n] = str[i];
		str[i] = t;
		i++;
		n--;
	}
	return (str);
}
