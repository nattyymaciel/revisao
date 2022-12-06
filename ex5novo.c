#include <stdio.h>
#include <stdlib.h>
#include "myLib.h"

char *alocaString(int size){
    char *st;
    //completar
    return st;
}

int main(){
    int size, i;
    char lixo[10];
    FILE *arq=fopen("imoveis.txt", "r");
    if(arq==NULL){
        printf("\nErro\n");
    }
    fscanf(arq, "%d", &size);
    Imovel *vetImoveis =(Imovel *) malloc (size*sizeof(Imovel));
    //ler separador
    for(i=0; i<size; i++){
        fscanf(arq,"%s", lixo);
        fscanf(arq, "%d", &vetImoveis[i].id);
        vetImoveis[i].tipoImovel=alocaString(size);
        fscanf(arq, "%s", &vetImoveis[i].finalidade);
        //repetir para demais dados do arquivo
        fscanf(arq, "%s", &vetImoveis[i].bairro);
        fscanf(arq, "%f", &vetImoveis[i].metragem);
        fscanf(arq, "%d", &vetImoveis[i].dormitorios);
        fscanf(arq, "%d", &vetImoveis[i].vagasGaragem);
        fscanf(arq, "%f", &vetImoveis[i].valor);
    }
    fclose(arq);
    float valor;
    Imovel aux= vendaMenorValor(&vetImoveis, size, &valor);
    //tratar caso de n existir imovel com valor desejado
    printf("Imovel de menor valor: %d , %f", aux.id, aux.tipoImovel);

    return 0;
}