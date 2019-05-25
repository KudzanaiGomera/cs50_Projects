/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <kgomera@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:06:04 by kgomera           #+#    #+#             */
/*   Updated: 2019/05/04 16:16:54 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//#include <library.h>
#include <cs50.h>

int main(void)
{
    // using the get_int method from a library
    int i = get_int("Integer: ");
    printf("hello, %i\n", i);

    return 0;
}
