#include "myLib.h"

int **learquivo(int id, char *tipoImovel, char *finalidade, char *bairro, float metragem, int dormitorios, int vagasGaragem, double valor){

    FILE *arq= fopen("imoveis.txt", "r");
    if(arq==NULL){
        printf("\nErro na abertura do arquivo.\n");
        return NULL;
    }
    int **vet;
    
    return vet;
}