/* ************************************************************************** */
/**/
/*:::  ::::::::   */
/*   __isascii.c   :+:  :+::+:   */
/*+:+ +:+ +:+ */
/*   By: jremy <jremy@student.42.fr>+#+  +:+   +#+*/
/*+#+#+#+#+#+   +#+   */
/*   Created: 2021/11/23 15:57:56 by jremy #+##+# */
/*   Updated: 2022/01/10 15:04:51 by jremy###   ########.fr   */
/**/
/* ************************************************************************** */

#include "libft.h"

int	__isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}
