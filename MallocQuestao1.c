/*
1 - Faça um programa que leia o tamanho de um vetor de inteiros e reserve dinamicamente memória para esse vetor. Em seguida, leia os elementos desse vetor, imprima o vetor lido, e mostre quantos números pares e impares estão presentes no vetor.  
*/

#include <stdio.h>
#include <stdlib.h>


int main(){

    int *vet,i,n, pares = 0,impares = 0;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    vet = (int*)malloc(n * sizeof(int));
    printf("Digite os valores do vetor:\n");

    for(i=0;i<n;i++){
        scanf("%d",&vet[i]);
       
    }
    for(i=0;i<n;i++){
        printf("vet[%d] = %d \n",i,vet[i]);
        if (vet[i] %2 ==0) {
            pares++;
        }

        if (vet[i] %2 !=0) {
            impares ++;
        }
    }


        
        printf("O total dos numeros pares é: %d",pares);
        printf("\nO total dos numeros impares é: %d",impares);
    free(vet);

}