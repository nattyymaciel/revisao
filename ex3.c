#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){

    int qtd;//quantidade de valores armazenados no arquivo original
    FILE *arq1 =fopen ("inteiros.txt", "r");
    if(arq1 == NULL){
        printf("\nErro ao abrir o arquivo original.\n");
        return 1;
    }
    else{
        printf("\nArquivo original aberto com sucesso!\n");
    }
    fscanf(arq1, "%d", &qtd);
    
    int *vetor;
    vetor= (int *)malloc(qtd*sizeof(int));//criação de um vetor com alocação dinamica com base na quantidade de valores armazenada no arquivo original
    if(vetor == NULL){
        printf("\nErro na alocação dinamica do vetor.\n");
        return 1;
    }
    int i, j;//contador do ciclo for
    for ( i = 0; i < qtd; i++){
        fscanf(arq1, "%d", &vetor[i]);
        printf("%d\t", vetor[i]);
    }
    printf("\n");
    fclose(arq1);
    int *vetaux;
    vetaux=(int *) malloc (0*sizeof(int));
    if(vetaux == NULL){
        printf("\nErro na alocação dinamica do vetor auxiliar.\n");
        return 1;
    }else{
        printf("\nMemoria alocada com sucesso.\n");
    }
    int aux=0, k=0;

    int repetido;
    for(i=0; i<qtd; i++){
        repetido=0;
        for(j=0; j<qtd; j++){
            if((vetor[i]==vetor[j])&& i!=j){
                repetido=1;
            }
        }
        if(repetido!=1){
            vetaux=(int*) realloc (vetaux,(k+1)*sizeof(int));
            vetaux[k]=vetor[i];
            printf("\n%d\t", vetaux[k]);
            k++;
        }    
    }
    free(vetor);
    
    FILE *arqsaida= fopen("unique.txt","w+");
    if(arqsaida == NULL){
        printf("\nErro ao abrir arquivo.\n");
        return 1;
    }else{
        printf("\nArquivo aberto com sucesso.\n");
    }
    aux=0;
    aux=fprintf(arqsaida,"%d \n",k);//primeiro dado do arquivo deve ser a quantidade de elementos a ser armazenado nele
    for(i=0; i<k; i++){
        if(aux==EOF){
            printf("\nErro na gravação.\n");
        }else{
            aux=fprintf(arqsaida,"%d \n",vetaux[i]);//escrever os valores armazenados no indice para o arquivo de saida
        }    
    }
    fclose(arqsaida);
    free(vetaux);

    return 0;
}