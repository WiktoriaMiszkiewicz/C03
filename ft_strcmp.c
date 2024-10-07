/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 03:06:54 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/06 14:29:33 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
  int i;
  i = 0;
  while (s1[i] == s2[i] && s1[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

int main ()
{
  char s1[] = "Wiki"; 
  char s2[] = "PAki";
  int result = ft_strcmp(s1,s2);
  printf("%d",result);
}