/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 03:06:37 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/07 10:52:11 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdio.h>
char *ft_strcat(char *dest, char *src)
{
  unsigned int i;
  unsigned int j;
  i = 0;
  while(dest[i] != '\0')
  {
    i++;
  }
    while(src[j])
  {
    dest[i++] = src[j++];
  }
  dest[i] = '\0';
  return(dest);
}

int main()
{
  char src[15] = "Wiktoria";
  char dest[30] = "Miszkiewicz ";
  char *result = ft_strcat(dest,src);
  printf("%s", result);
}
