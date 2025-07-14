#include "pilas.h"
int main (){
    int i,j,num, max, min;
    pila *P1;
    float prom=0, desv=0;
    
    //Agregar items a la pila
    printf("Cantidad de elementos de su pila: ");
    scanf("%i",&j);
    P1=crearp(j);
    for(i=0; i<j; i++){
        printf("Elemento %i: ",i+1);
        scanf("%i",&num);
        push(P1, num); 

    } 
    printf("\nLa pila:\n");
    imprimir(P1);

    //Intercambiar el tope 
    EXCH(P1);
    printf("\nDespués del intercambio:\n");
    imprimir(P1);

    //Calcular máximo, mínimo, promedio y desviación estándar
    max= MAX(P1);
    min=MIN (P1);
    prom=PROM(P1);
    desv=DESVSTD(P1);
    printf("\nPromedio de la pila: %.2f", prom);
    printf("\nMaximo de la pila: %d",max);
    printf("\nMinimo de la pila: %d",min);
    printf("\nDesviacion estándar de la pila: %.2f", desv); 
    return 0; 
}