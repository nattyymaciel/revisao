#include <stdio.h>
#include <stdlib.h>

void preenchematriz(int lin, int col, int** matriz){
    int i, j;
    for(i=0; i<lin;i++){
        for(j=0; j<col; j++){
            printf("\n Digite o valor para armazenar na matriz:\n");
            scanf("%d", &matriz[i][j]);
        }
    }
}
void printmatriz(int lin, int col, int **matriz){
    int i, j;
    for(i=0; i<lin;i++){
        for(j=0; j<col; j++){
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}
int triangularSuperior (int **mat, int n){
    int i, j;
    for(i=0; i<n;i++){
        for(j=0; j<i; j++){
            if(mat[i][j]!=0){
                return 0;
            }
        }   
    }
    return 1;//se 1 é superior
}
int triangularInferior (int **mat, int n, int *ehSuperior){
    int i, j;
        for(i=0; i<n;i++){
            for(j=i+1; j<n; j++){
                if(mat[i][j]!=0){
                    return 0;//n é inferior
                }
            }   
        }
    *ehSuperior=triangularSuperior(mat, n);
    if(*ehSuperior==1){
        printf("\nA matriz eh trinagular superior.\n");
    }else{
        printf("\nA matriz nao eh trinagular superior.\n");
    }
    return 1;//é inferior
}
int **alocaMatriz (int lin, int col){

   int i; 
   int **mat;
   
   mat=(int**)malloc(lin*sizeof(int*));
   if (mat== NULL){
      printf("\n Ocorreu erro em alocar matriz.\n");
      return 0;
   }
   for(i=0; i<lin; i++){
      mat[i]=(int*)malloc(col*sizeof(int));
      if(mat[i]==NULL){
        return 0;

      }
   }
   return mat;
}


int main(int argc, char *argv[]){

    int n= atoi(argv[1]);
    int lin, col, triang;
    lin=n;
    col=n;

    if(n<0 && n>50) {
        printf("\nNumero incorreto de parametros. Execute seu programa com um valor inteiro e positivo.\n");
    }
    int **matriz=alocaMatriz(lin, col);
    preenchematriz(lin, col, matriz);
    printmatriz(lin, col, matriz);
    int superior=triangularInferior(matriz, n, &triang);
    if (superior==0){
        printf("\nA matriz nao eh triangular inferior.\n");
    }else{
        printf("\nA matriz eh triangular inferior.\n");
    }
    return 0;
}