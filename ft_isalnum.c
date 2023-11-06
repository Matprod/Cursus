/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mvoisin <mvoisin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:08:50 by mvoisin           #+#    #+#             */
/*   Updated: 2023/11/06 15:38:35 by mvoisin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 64 && c <= 90) || (c >= 97 && c <= 12) || (c >= 48 && c <= 57))
		return (1);
	else
		return (0);
}

