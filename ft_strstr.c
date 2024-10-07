/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 03:07:54 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/07 11:19:55 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char *ft_strstr(char *str, char *to_find)
{
  unsigned int i;
  unsigned int j;
  i = 0;
  j = 0;
  if (to_find[0] == '\0')
  {
    return(str);
  }
  while (str[i] != '\0')
  {
    if (str[i] == to_find[0])
    {
      while (str[j + i] == to_find[j] && to_find[j] != '\0')
      {
        j++;
      }
      if (to_find[j] == '\0')
        return &str[i];
    } 
    i++;
  }
}

#include <stdio.h>
int main()
{
    char str[30] = "piesek i kotek"; 
    char to_find[] = "kotek";      
    char *result = ft_strstr(str,to_find);
    printf("%s\n", result);  
    return 0;
}