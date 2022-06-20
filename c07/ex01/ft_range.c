/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/06 18:43:46 by mfadlika          #+#    #+#             */
/*   Updated: 2022/06/09 12:06:42 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int				*dest;
	int				*np;
	unsigned int	i;
	unsigned int	size;

	i = 0;
	np = NULL;
	size = max - min;
	if (min >= max)
	{
		return (np);
	}
	dest = (int *) malloc (size * sizeof(int));
	while (i < size)
	{
		dest[i] = min++;
		++i;
	}
	return (dest);
}
