/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 03:07:15 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/07 09:33:14 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
  unsigned int i; // musi byc bo nie moze byc ujemna
  i = 0;
  while (s1[i] == s2[i] && i < n && s1[i]  && s2[i])
	{
		i++;
	}
  if (i == n)
    return 0;
	return (s1[i] - s2[i]);
}
#include <stdio.h>
int main ()
{
  char s1[] = "wikib"; 
  char s2[] = "wikiB";
  unsigned int n = 5;
  int result = ft_strncmp(s1,s2,n);
  printf("%d",result);
}