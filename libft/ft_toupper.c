/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jgengo <jgengo@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/07 10:36:06 by jgengo            #+#    #+#             */
/*   Updated: 2016/11/07 10:41:50 by jgengo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		return (c - ('a' - 'A'));
	return (c);
}