#include <stdio.h>

int
main ()
{
  float suma = 0, i, num;
  int n;

  printf ("Cuantos numeros quieres sumar?\n");
  scanf ("%d", &n);

  for (i = 1; i <= n; i++)
    {
    printf ("Introduce el numero %.0f \n", i);
    scanf ("%f", &num);
    if (num > 0)
    suma+=num;
    }

  printf ("La suma de solo los positivos fue de  %.0f\n", suma);

  return 0;
}