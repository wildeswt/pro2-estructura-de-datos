#include <stdio.h>

int suma_digitos(int num){
    if (num==0)
        return 0;
    return (num%10)+suma_digitos(num/10);
}

int main(){
    int n;

    printf("Numero: ");
    scanf("%d",&n);
    printf("La suma de los digitos de %d es: %d\n",n,suma_digitos(n));
}
