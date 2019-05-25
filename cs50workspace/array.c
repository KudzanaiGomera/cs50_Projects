/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   array.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <kgomera@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 19:46:17 by kgomera           #+#    #+#             */
/*   Updated: 2019/05/04 20:34:12 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

void set_int(int x);
void set_array(int array[4]);

int main(void)
{
    int a = 10;
    int b[4] = { 0, 1, 2, 3};
    set_int(a);
    set_array(b);
    printf("%d %d\n", a, b[0]);

    return 0;
}

void set_int (int x)
{
    x = 22;
}

void set_array(int array[4])
{
    array[0] = 22;
}
