#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct node {
    char name[20];
    int value;
    struct node *next;
} Node;

 //Inicializar listas vacias 
Node *Lista_Vacia (Node *listp){
    listp=NULL;
    return listp;
}

 //Crear un nuevo item
Node *new_item(char *name, int value){
    Node *newp;
    if((newp=(Node *)malloc(sizeof(Node)))==NULL){
    fprintf(stderr,"new_item: error en malloc\n");
    exit(1);
    }
    strcpy(newp->name,name);
    newp->value = value;
    newp->next=NULL;
    return newp;
}

//Añade newp al frente de listp 
Node *add_front(Node *listp, Node *newp){
    newp->next=listp;
    return newp;
}

//Añadir newp al final de listp
Node *add_end(Node *listp, Node *newp) {
    Node *p;

    if (listp==NULL){
        return newp;
    }
    for(p=listp;p->next!=NULL;p=p->next);
    p->next = newp;
    return listp;
}

//Mostrar los elementos en listp 
void print(Node *listp){
    printf("--> ");
    for(;listp!=NULL;listp=listp->next)
    printf("%s: %d--> ",listp->name,listp->value);
    printf("NULL\n");
}

//Crear una copia de listp
Node *copy (Node *listp){
    Node *original=listp;
    Node *primer=NULL;
    Node *ult=NULL;

    while (original!=NULL){
        if (primer==NULL){
            primer=(Node*)malloc(sizeof(Node));
            strcpy(primer->name,original->name);
            primer->value=original->value;
            primer->next=NULL;
            ult=primer;
        }
        else{ 
            ult->next=(Node*)malloc(sizeof(Node));
            ult=ult->next;
            strcpy(ult->name,original->name);
            ult->value=original->value;
            ult->next=NULL;
        }
        original=original->next;
    }
    return primer;
}