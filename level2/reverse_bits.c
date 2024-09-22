/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse_bits.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 21:57:24 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/18 22:47:37 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	reverse_bits(unsigned char octet)
{
   unsigned char rev;
   int i;
   
   i = 0;
   rev = 0;
   while (i <=7)
   {
    rev = (rev << 1 ) | (octet & 1);
    octet >>= 1;
    i++;
   }
   return (rev);
}

int main(void) {
    unsigned char octet = 0b01000001; // Example input
    unsigned char reversed = reverse_bits(octet);
    
    printf("Original: 0b");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (octet >> i) & 1);
    }
    
    printf("\nReversed: 0b");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (reversed >> i) & 1);
    }
    
    printf("\nOriginal (hex): 0x%X\n", octet);
    printf("Reversed (hex): 0x%X\n", reversed);
    
    return 0;
}