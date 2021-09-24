
/* EXERCICE

1. Пользователь вводит число в десятичной системе счисления, необходимо распечатать его в двоичной системе счисления.
Бонус: предусмотреть использование отрицательных чисел и возможность переполнения.
Пример ввода: 5
Пример вывода: 101

 */


/* SOLUTION */

#include <stdio.h>
#include <stdlib.h>
int main(){

  int tab[10], nbr, i;

  printf("Enter the decimal number to convert: ");
  scanf("%d",&nbr);

  for(i=0; nbr > 0; i++)
  {
    tab[i] = nbr%2;
    nbr = nbr/2;
  }

  printf("\nthe binary number: ");

  for(i=i-1; i >= 0; i--)
  {
    printf("%d",tab[i]);
  }

  return 0;
}


