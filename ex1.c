#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int potencia(int x, int n){
    if(x<=-1||n<=-1){
        return 1;
    }
    else{
        int pot, rec=0;
        //pot=x*x;
        //printf("\nTopo da pilha, chamada expoente=%d , base=%d ,resultado=%d \n", n, x, rec); 
        
        rec=potencia(x,n-1);
        printf("\nTopo da pilha. Base=%d, expoente=%d, resultado=%d.", x, n, rec);
        return (x*rec);
    }
}

int main(){
    int n, x;
    int multi_seq; 

    do{
        printf("\nDigite uma valor para a base x:");
        scanf("%d", &x);
        if(x!=-1){
            printf("\nDigite uma valor para o expoente n:");
            scanf("%d", &n);
            multi_seq=potencia(x, n);
        }
        
    } while((x != -1) && (n !=-1));

    


    return 0;
}