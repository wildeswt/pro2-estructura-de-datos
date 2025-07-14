#include <stdio.h>
#include <stdlib.h>

typedef struct{
    int *elem;
    int cant;
    int frente;
    int ult;
    int capacidad;
} bicola; 

//Crear bicolas
bicola *CrearBicola (int capacidad){
   bicola *bc=(bicola*)malloc(sizeof(bicola));
   bc->cant=0;
   bc->frente=0;
   bc->ult=0;
   bc->capacidad=capacidad;
   bc->elem=malloc(capacidad *sizeof(int));
   return bc;
}

//Verificar si la bicola está vacía 
int BicolaVacia(bicola *bc){
    return bc->cant==0;
}

//Poner item al frente de la bicola
int Ponerfrente (bicola *bc, int dato){
    if (bc->cant==bc->capacidad){
        return 0; 
    }
    bc->cant++;
    bc->elem[bc->ult]=dato;
    bc->ult=(bc->ult+1)%(bc->capacidad);
    return 1; 
}

//Poner item al final de la bicola
int PonerUltimo(bicola *bc, int dato){
    if (BicolaVacia(bc)){
        return 0;
    }
    if (bc->cant==bc->capacidad){
        return 0; 
    }
    bc->cant++;
    bc->elem[bc->frente]=dato;
    bc->frente=(bc->frente+1)%bc->capacidad;
    return 1; 
}

//Quitar primer elemento de una bicola y retornarlo
int QuitarFrente (bicola *bc){
    int dato; 
    if (BicolaVacia(bc)){
        return 0;
    }
    bc->cant--;
    dato=bc->elem[bc->frente];
    bc->frente=(bc->frente+1)%bc->capacidad;
    return dato; 
}

//Quitar último elemento de una bicola y retornarlo
int QuitarUltimo(bicola *bc){
    int dato;
    if (BicolaVacia(bc)){
        return 0; 
    }
    bc->cant--;
    dato=bc->elem[bc->ult],
    bc->ult=(bc->ult-1)%bc->capacidad;
    return dato; 
}

//Devolver el primer elemento 
int Frente(bicola *bc){
    int dato; 
      if (BicolaVacia(bc)){
        return 0; 
    }
    dato=bc->elem[bc->frente];
    return dato; 
}

//Devolver el ultimo elemento
int Final(bicola *bc){
    int dato; 
      if (BicolaVacia(bc)){
        return 0; 
    }
    dato=bc->elem[bc->ult];
    return dato; 
}

//Crear una copia de la bicola
bicola *Copy (bicola* bc){
    bicola* copia;
    int i;
    copia=CrearBicola(bc->capacidad); 
    for (i = 0; i < bc->cant; ++i)
        Ponerfrente(copia, bc->elem[i]);
    return copia; 
}

//Imprimir bicola
void imprimir (bicola *bc){
   int i; 
   for (i=0; i<bc->cant; i++)
    printf ("%d\n", bc->elem[i]);
}