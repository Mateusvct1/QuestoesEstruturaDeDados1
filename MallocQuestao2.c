/*
2 - Faça um programa para armazenar um vetor de dados contendo n valores do tipo int, usando a função de alocação dinâmica de memória MALLOC:  
a) Atribua para cada elemento do vetor o valor do seu índice.  
b) Exibir na tela os 2 primeiros e os 2 últimos elementos do vetor. 

*/
#include <stdio.h>
#include <stdlib.h> 

int main(){

    int *vet,n,i;

    printf("Dgite o tamanho do vetor: ");
    scanf("%d",&n);

    vet = (int *) malloc(n* sizeof(int));
    
    for(i=0;i<n;i++){
        vet[i] = i;
    }

    printf("\nOs 2 primeiros elementos do vetor são: %d e %d\n", vet[0], vet[1]);

    printf("\\nOs 2 últimos elementos do vetor são: %d e %d\n", vet[n - 2], vet[n - 1]);
    
    free(vet);
    return 0;
}