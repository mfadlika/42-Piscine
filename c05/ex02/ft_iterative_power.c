/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfadlika <mfadlika@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/01 22:15:07 by mfadlika          #+#    #+#             */
/*   Updated: 2022/06/04 19:41:22 by mfadlika         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	n;

	n = nb;
	if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	while (power != 1)
	{
		n = n * nb;
		--power;
	}
	return (n);
}
