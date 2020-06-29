/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junhypar <junhypar@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/29 17:04:27 by junhypar          #+#    #+#             */
/*   Updated: 2020/06/29 17:24:25 by junhypar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int c)
{
	while(1)
	{
		if (*s == '\0')
			return (0);
		if (*s == c)
			return ((char *)s);
		s++;
	}
}
