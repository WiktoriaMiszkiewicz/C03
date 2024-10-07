/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wiktoria <wiktoria@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/06 03:08:15 by wiktoria          #+#    #+#             */
/*   Updated: 2024/10/07 11:26:10 by wiktoria         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
    unsigned int i = 0;
    unsigned int j = 0;
    unsigned int dest_len = 0;
    unsigned int src_len = 0;

    // Obliczamy długość 'dest'
    while (dest[dest_len] != '\0')
        dest_len++;

    // Obliczamy długość 'src'
    while (src[src_len] != '\0')
        src_len++;

    // Jeżeli rozmiar bufora jest mniejszy lub równy długości 'dest', zwróć sumę 'size' i 'src_len'
    if (size <= dest_len)
        return size + src_len;

    // Zaczynamy łączenie 'src' z 'dest', dopóki nie skończy się miejsce
    i = dest_len;
    while (src[j] != '\0' && i < size - 1)
    {
        dest[i] = src[j];
        i++;
        j++;
    }

    // Dodajemy znak końca ciągu '\0'
    dest[i] = '\0';

    // Zwracamy sumę długości 'dest' i 'src'
    return dest_len + src_len;
}
int main() {
    // Przykład 1: Normalne łączenie, gdzie jest wystarczająco dużo miejsca
    char dest1[20] = "Hello, ";
    char src1[] = "world!";
    unsigned int result1;

    result1 = ft_strlcat(dest1, src1, sizeof(dest1));

    printf("Przykład 1:\n");
    printf("Połączony ciąg: %s\n", dest1);
    printf("Całkowita długość połączenia: %u\n", result1);
    printf("\n");

    // Przykład 2: Bufor zbyt mały, aby połączyć całe src
    char dest2[10] = "Hi, ";
    char src2[] = "there!";
    unsigned int result2;

    result2 = ft_strlcat(dest2, src2, sizeof(dest2));

    printf("Przykład 2:\n");
    printf("Połączony ciąg: %s\n", dest2);
    printf("Całkowita długość połączenia: %u\n", result2);
    printf("\n");

    // Przykład 3: Bardzo mały bufor, nie pozwala na połączenie
    char dest3[5] = "Hey";
    char src3[] = "you!";
    unsigned int result3;

    result3 = ft_strlcat(dest3, src3, sizeof(dest3));

    printf("Przykład 3:\n");
    printf("Połączony ciąg: %s\n", dest3);
    printf("Całkowita długość połączenia: %u\n", result3);
    printf("\n");

    return 0;
}