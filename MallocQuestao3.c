/*
 3 - Crie uma funcao que receba como parametros dois vetores de inteiros, v1 e v2, e as
suas respectivas quantidades de elementos, n1 e n2. A funCao devera retornar um
ponteiro para um terceiro vetor, v3, com capacidade para (n1 + n2) elementos, alocado
dinamicamente, contendo a uniC#o de v1 e v2.
Por exemplo, se v1 = {11, 13, 45, 7} e v2 = {24, 4, 16, 81, 10, 12}, v3 irC! conter
{11, 13, 45, 7, 24, 4, 16, 81, 10, 12}.
O cabecalho dessa funcao deverC! ser o seguinte:
void uniao(int *v1, int n1, int *v2, int n2);
Em seguida, crie a funcao principal do programa para chamar a funcao uniao passando
dois vetores informados pelo usuC!rio. Em seguida, o programa deve exibir na tela os
elementos do vetor resultante. NC#o esqueC'a de liberar a memC3ria alocada
dinamicamente.
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void uniao(int *v1, int n1, int *v2, int n2){
  
    int *v3, n3, i;
    n3 = n1 + n2;
   
    v3 = (int *)malloc(n3 * sizeof(int));
    
    for (i = 0; i < n1; i++) {
        v3[i] = v1[i];
    }
    for (i = 0; i < n2; i++){
        v3[n1 + i] = v2[i];
    }
    for (i = 0; i < n3; i++) {
        printf("vetor[%d] = %d \n", i, v3[i]);
    }
    free(v3);
}

int main(){
    // n1 e n2 sao os tamanhos dos vetores
    int *v1, n1, *v2, n2, i;
    printf("digite o tamanho dos vetores:\n");
    scanf("%d %d", &n1, &n2);
    v1 = (int *)malloc(n1 * sizeof(int));
    v2 = (int *)malloc(n2 * sizeof(int));
    
    printf("Digite os elementos do vetor1:\n");
    for (i = 0; i < n1; i++){
        scanf("%d", &v1[i]);
    }

    printf("Digite os elementos do vetor2:\n");
    for (i = 0; i < n2; i++) {
        scanf("%d", &v2[i]);
    }
    
    uniao(v1, n1, v2, n2);
    free(v1);
    free(v2);
    
    return 0;
}
