/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/08 08:19:04 by mfadlika          #+#    #+#             */
/*   Updated: 2022/06/09 16:18:07 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		++i;
	return (i);
}

int	ft_final_strlen(char **strings, int size, char *sep)
{
	int	final_len;
	int	i;
	int	sep_len;

	sep_len = ft_strlen(sep);
	final_len = 0;
	i = 0;
	while (i < size)
	{
		final_len += ft_strlen(strings[i]);
		final_len += sep_len;
		++i;
	}
	final_len -= sep_len;
	return (final_len);
}

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		++i;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		full_len;
	int		i;
	char	*final_str;
	char	*initial_str;

	if (size == 0)
		return ((char *) malloc (sizeof(char)));
	full_len = ft_final_strlen(strs, size, sep);
	final_str = (char *) malloc((full_len + 1) * sizeof(char));
	initial_str = final_str;
	if (!final_str)
		return (0);
	i = -1;
	while (++i < size)
	{
		ft_strcpy(final_str, strs[i]);
		final_str += ft_strlen(strs[i]);
		if (i < size - 1)
		{
			ft_strcpy(final_str, sep);
			final_str += ft_strlen(sep);
		}
	}
	*final_str = '\0';
	return (initial_str);
}
