/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:09:44 by mfadlika          #+#    #+#             */
/*   Updated: 2022/06/04 19:40:43 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	n;

	n = nb;
	if (nb < 0)
		return (0);
	else if (nb == 0)
	{
		nb = 1;
		return (nb);
	}
	else
	{
		while (n > 1)
		{
			nb = nb * (n - 1);
			--n;
		}
		return (nb);
	}
	return (nb);
}
