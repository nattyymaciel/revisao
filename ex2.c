#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int somaDigitos(int num){
    if (num==0){
        return 0;
    }
    else{
        int div, soma=0;
        div=num%10;
        printf("\nTopo da pilha. Digito= %d.\n", div);
        soma=div+somaDigitos(num/10);
        printf("\nRetorno da chamada. Digito= %d. Soma=%d\n", div, soma);
        return (soma);
    }
        
}

int main(){
    int num, soma;
    do{
        printf("\nDigite uma valor para a a soma:\n");
        scanf("%d", &num);
        soma=somaDigitos(num);    
            
    } while(num!=0);

    return 0;
}