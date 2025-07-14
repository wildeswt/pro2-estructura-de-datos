#include "bicolas.h"

int main (){
    int i,j,num;
    bicola *bc, *copiabc;
    
    printf("Ingrese la cantidad de elementos de su bicola: ");
    scanf("%d",&j);
    bc=CrearBicola(j);
    for (i=0; i<j; i++){
    	printf("Elemento %d: ", i+1);
    	scanf("%d",&num);
    	Ponerfrente(bc,num);
    }
    printf("\nLa bicola:\n");
    imprimir(bc); 

    //Copia de una bicola
    copiabc=Copy(bc);
    printf("\nCopia de la bicola:\n");
    imprimir(copiabc);
    return 0; 
}