#include <stdio.h>

int suma_productos(int x, int y){
    if (x==0 && y==0)
        return 0;
    if (x==1 && y!=1)
        return (x*y)+suma_productos(x, y-1);
    if (x!=1 && y==1)
        return (x*y)+suma_productos(x-1, y);
    return (x*y)+suma_productos(x-1,y-1);
}

int main(){
    int x,y;

    printf("Valor de X: ");
    scanf("%d",&x);
    printf("Valor de Y: ");
    scanf("%d",&y);
    printf("La suma de los productos de %d y %d en decremento es: %d\n",x,y,suma_productos(x,y));
}