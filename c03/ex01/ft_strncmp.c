/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/31 10:21:07 by mfadlika          #+#    #+#             */
/*   Updated: 2022/06/06 12:01:06 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned int	a;

	i = 0;
	a = 0;
	while (!a && i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		a = s1[i] - s2[i];
		++i;
	}
	if (!a && i < n && (s1[i] == '\0' || s2[i] == '\0'))
		a = s1[i] - s2[i];
	return (a);
}