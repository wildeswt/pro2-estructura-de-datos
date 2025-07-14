#include <stdio.h>
int main ()
{
int numeros[100], mayor, menor, suma, i,j;
float prom;

 printf("Inserte el numero de elementos del arreglo: ");
 scanf("%i",&j);
 while (j<=0){
  printf("Numero invalido, intente de nuevo: ");
  scanf("%i",&j);
 }
 for (i=0; i<j; i++)
 {
    printf("Escribir el valor %i \n", i+1);
    scanf("%i", &numeros[i]);
 }
 mayor=numeros[0];
 for (i=0; i<j; i++)
 {
    if (numeros[i]>mayor)
        mayor=numeros[i];
 }
 menor=numeros[0];
 for (i=0; i<j; i++)
 {
    if (numeros[i]<menor)
        menor=numeros[i];
 }
 for (i=0; i<j; i++)
 {
    suma+= numeros[i];
 }
 prom=suma/j;
 printf("%i es el numero mayor", mayor);
 printf("\n%i es el numero menor", menor);
 printf("\n%.2f es el promedio de todos los numeros en el arreglo", prom);
 }
