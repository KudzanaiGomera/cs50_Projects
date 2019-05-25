/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <kgomera@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/05 19:30:39 by kgomera           #+#    #+#             */
/*   Updated: 2019/05/05 20:22:08 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <cs50.h>
#include <stdio.h>


int add_values(int a, int b);

int main(void)
{
   // printf("Enter value of x: ");
    int x = get_int("Enter value of x: ");

   // printf("Enter value for y: ");
    int y = get_int("Enter value of x: ");

    int z = add_values(x, y);

    printf("The sum of %i and %i is %i\n", x, y,z);

}

int add_values(int a, int b)
{
    // declaring and storing the maths in another variable sum
    int sum = a + b;

    return sum;
}
