#include <stdio.h>
int mayor(int a, int b, int c)

{
    if ((a>=b)&& (a>=c))
       printf("%i es el numero mayor \n", a);
    else if ((b>=a)&&(b>=c))
            printf("%i es el numero mayor \n", b);
        else
            printf("%i es el numero mayor \n", c);
}
 int main()
 {
int num1, num2, num3;
 printf("Inserte el primer numero \n");
 scanf("%i", &num1);
 printf("Inserte el segundo numero \n");
 scanf("%i", &num2);
 printf("Inserte el tercer numero \n");
 scanf("%i", &num3);
 mayor(num1, num2, num3);
 }
