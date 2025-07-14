#include <stdio.h>

int suma_impares(int n) {
    if (n == 1) 
        return 1;
    return (2*n - 1) + suma_impares(n-1);
}

int main(){
	int num;
	
	printf("Cantidad de numeros: ");
	scanf("%d",&num);
	printf("La suma de los primeros %i numeros impares es: %i\n",num,suma_impares(num));
}
