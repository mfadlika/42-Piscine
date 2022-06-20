/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/26 21:58:00 by mfadlika          #+#    #+#             */
/*   Updated: 2022/06/01 11:37:12 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;
	int	a;

	i = -1;
	if (str[0] == '\0')
		a = 1;
	else
	{
		while (str[++i] != '\0')
		{
			if (str[i] >= 65 && str[i] <= 90)
				a = 1;
			else
			{
				a = 0;
				break ;
			}
		}
	}
	return (a);
}
