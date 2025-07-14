#include "listas.h"
int main (){
    int i,j,edad;
    char nom[20];

    //Inicializar elementos
    Node *Elemento=NULL;
    Node *Nuevo=NULL;
    Node *Nuevo2=NULL;

    //Inicializar listas
    Node *Lista=Lista_Vacia(Lista);
    Node *ListaCopia= Lista_Vacia(ListaCopia);
    
    //Agregar nuevos items a la lista
    printf("Cantidad de elementos de su lista: ");
    scanf("%i",&j);
    for(i=0; i<j; i++){
        printf("Nombre %i: ",i+1);
        scanf("%s",&nom);
        printf("Edad %i: ",i+1);
        scanf("%i",&edad);
        Elemento=new_item(nom,edad);
        Lista=add_end(Lista,Elemento);
    } 

    printf("\n");

    //Imprimir Lista
    printf("La lista creada:\n");
    print(Lista);

    printf("\n");

    //Crear copia de la Lista
    ListaCopia=copy(Lista);
    printf("La copia de la lista:\n");
    print(ListaCopia);

    printf("\n");

    //Añadir nuevo item al principio de la lista
    printf("Ingrese los datos del nuevo elemento (Al principio):\n");
    printf("Nombre: ");
    scanf("%s",&nom);
    printf("Edad: ");
    scanf("%i",&edad);
    Nuevo=new_item(nom,edad);
    Lista=add_front(Lista,Nuevo);

    printf("\n");

    //Añadir nuevo item al final de la lista
    printf("Ingrese los datos del nuevo elemento (Al final):\n");
    printf("Nombre: ");
    scanf("%s",&nom);
    printf("Edad: ");
    scanf("%i",&edad);
    Nuevo2=new_item(nom,edad);
    Lista=add_end(Lista,Nuevo2);

    printf("\n");

    //Imprimir ambas listas
    printf("Las listas creadas:\n");
    print(ListaCopia);
    printf("\n");
    print(Lista);
    return 0;
}