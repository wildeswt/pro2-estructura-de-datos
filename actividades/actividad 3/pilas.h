#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct {
    int tope;
    int *elem;
    int capacidad; 
} pila;

//Inicialzar pila en nulo
void anula (pila *p){
    p->tope=-1;
}

//Verificar si la pila está vacía
int vacia (pila *p){
    return p->tope==-1;
}

//Verificar si la pila está llena 
int llena(pila *p){
    return p->tope==p->capacidad-1;
}

//Crear pila
pila *crearp (int capacidad){
    pila *p= malloc(sizeof(p));
    p->tope=-1;
    p->capacidad= capacidad;
    p->elem=malloc(capacidad *sizeof(int));
    return p; 
}
//Apilar en la pila
int push (pila *p, int dato){
    if (llena(p))
        return 0;
    p->tope++;
    p->elem[p->tope]=dato;
    return 1;
}

//Devolver el tope de una pila
int top (pila *p){
    int dato; 
    if (p->tope==-1)
        return 0; 
    dato=p->elem[p->tope];
    return dato;
}

//Desapilar una pila
int pop (pila *p){
    int dato; 
     if (vacia(p))
        return 0; 
    dato=p->elem[p->tope];
    p->tope--;
    return dato;
}

//Intercambiar tope con el anterior
int EXCH (pila *p){
    int aux;
    if (vacia(p)) 
        return 0;
    aux = p->elem[p->tope];
    p->elem[p->tope] = p->elem[p->tope-1];  
    p->elem[p->tope-1] = aux;
    return 1;
}

//Funcion para calcular el máximo de una pila
int MAX (pila *p){
    int x=0;
    if (vacia(p))
       return 0;
    for (int i=0 ; i<=(p->tope); i++){
        if (x< p->elem[i])
          x= p->elem[i];
    }
    return x;
} 

//Funcion para calcular el mínimo de una pila
int MIN (pila *p){
    int x=9999999;
    if (vacia(p))
        return 0; 
    for (int i=0 ; i<=(p->tope); i++){
        if (x > p->elem[i])
          x= p->elem[i];
    }
    return x;
} 

//Funcion para calcular el promedio de una pila
float PROM (pila *p){
    float suma=0;
    float prom=0;
    int i; 
    if (vacia(p))
       return 0; 
    for (i=0 ; i<=p->tope; i++)
        suma += p->elem[i];
    prom = suma/((float)p->tope+1);
    return prom;
}

// Funcion para calcular la desviación estándar
float DESVSTD (pila *p){
    float prom=0;
    float suma=0;
    float desv=0;
    int i;
    if (vacia(p))
        return 0; 
    prom= PROM(p);
    for (i=0 ; i<=p->tope; i++)
        suma+=pow((p->elem[i] - prom),2);
    desv= sqrt(suma/((float)p->tope+1));
    return desv;
}

//Imprimir pila
void imprimir (pila *p){
    int i;
    if (vacia(p))
        return;
    for (i=p->tope; i>=0; i--){
        printf("%d\n", p->elem[i]);
    }
}