/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: halaoui <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/04 19:42:07 by halaoui           #+#    #+#             */
/*   Updated: 2022/11/04 19:45:51 by halaoui          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	size_t	i;

	i = 0;
	if (!s || !f)
		return ;
	if (s)
	{
		while (s[i])
		{
			(*f)(i, &s[i]);
			i++;
		}
	}
}
// void f(unsigned int i , char *s)
// {
//    while(*s)
//    {
//     s = s - 32;
//     s++; 
//    }
// }
// int main()
// {
//     char *p = "hossine";
//     ft_striteri(p,&f);
//     printf("%s",p);
// }