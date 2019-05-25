/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   3N+1sequence.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <kgomera@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/06 23:16:50 by kgomera           #+#    #+#             */
/*   Updated: 2019/05/06 23:48:59 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int main(int start_value)
{
    int value;
    int counter = 1;
    
    printf("Enter starting value: ");
    scanf("%i", &start_value);

    value = start_value;

    printf("the sequence is starting at %i\n", value);
    

    while(value > 1)
    {
        if (value % 2 == 1)
            value = value * 3 + 1; // value is an Odd num

        else
            value = value / 2; // value is an even num

        counter++;
        printf("the value is %i\n", value);
    }

    printf("there were %i terms in the sequence\n", counter);

    return 0;

}
