#include <stdio.h>
#define N 8
//La casilla no ha sido pisada por el caballo
int validar(int x, int y, int tablero[N][N]) {
    return (x >= 0 && x < N && y >= 0 && y < N && tablero[x][y] == -1);
}
int recorrido(int x, int y, int cont, int tablero[N][N], int x_mov[8], int y_mov[8]){
    int k, x_prox,y_prox;

    if (cont==N*N)
        return 1;
    for (k = 0; k < 8; k++) {
        x_prox = x + x_mov[k];
        y_prox = y + y_mov[k];
        if (validar(x_prox, y_prox, tablero)) {
            tablero[x_prox][y_prox] = cont+1;
            if (recorrido(x_prox, y_prox, cont+1, tablero, x_mov, y_mov)) 
                return 1;
            else  
                tablero[x_prox][y_prox]=-1; 
        }
    }
    return 0;
}

void imprimir_recorrido(int tablero[N][N]){
   for(int i=0; i<N; i++){
        for(int j=0; j<N; j++){
            if (tablero[i][j]<10)
                printf("%d  ",tablero[i][j]);
            else
                printf("%d ",tablero[i][j]);
        }
        printf("\n");
   }
    return;
} 
int main(){
    int tablero[N][N];
    int x_mov[8] = {2, 1, -1, -2, -2, -1, 1, 2};
    int y_mov[8]=  {1, 2, 2, 1, -1, -2, -2, -1};
    int i,j,cont=1;

    //Inicializar tablero
    for (i=0; i<N; i++)
        for (j=0; j<N; j++)
            tablero[i][j]=-1;
    tablero[0][0]=1;

    if (recorrido(0,0,cont,tablero,x_mov,y_mov)==1) 
        imprimir_recorrido(tablero);
    else    
        printf("No tiene solucion\n");

    return 0;
}