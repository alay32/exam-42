/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_bits.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ael-mejd <ael-mejd@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/18 23:05:15 by ael-mejd          #+#    #+#             */
/*   Updated: 2024/08/18 23:27:34 by ael-mejd         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned char	swap_bits(unsigned char octet)
{
    return ((octet >> 4) | (octet << 4));
}

int main(void) 
{
    unsigned char octet = 0b01001101; // Example input
    unsigned char swapped = swap_bits(octet);
    
    printf("Original: 0b");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (octet >> i) & 1);
    }
    
    printf("\nSwapped: 0b");
    for (int i = 7; i >= 0; i--) {
        printf("%d", (swapped >> i) & 1);
    }
    
    printf("\nOriginal (hex): 0x%X\n", octet);
    printf("Swapped (hex): 0x%X\n", swapped);
    
    return 0;
}