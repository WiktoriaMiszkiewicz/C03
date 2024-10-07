/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 03:07:40 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/07 11:08:56 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strncat(char *dest, char *src, unsigned int nb)
{
  unsigned int i;
  unsigned int j;
  i = 0;
  j = 0;
  while (dest[i] != '\0')
  {
    i++;
  }
  while (src[j] != '\0' && j < nb)
  {
    dest[i++] = src[j++];
  }
  dest[i] = '\0';
  return (dest);
}

#include <stdio.h>
int main()
{
    char dest[30] = "Kot i "; 
    char str[] = "Pies";      
    unsigned int nb = 15;
    char *result = ft_strncat(dest, str, nb);
    printf("%s\n", result);  

    return 0;
}