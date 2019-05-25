/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   return.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kgomera <kgomera@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/04 16:47:58 by kgomera           #+#    #+#             */
/*   Updated: 2019/05/04 17:03:37 by kgomera          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

// prototyping
int square(int n);

int main(void)
{
    int x = 4;
    printf("x square is: ");

    // callinnt the square method below
    printf("%i\n", square(x));

    return 0;
}

int square(int n)
  {
      return n * n;
  }
