/*
4 - Criar uma estrutura que represente um aluno, contendo nome, media e faltas. Faça um
programa que leia informações de n alunos em um vetor alocado dinamicamente. Em
seguida, imprima as informações lidas na ordem decrescente das medias dos alunos.

*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct alunos
{

     char nome[50];
     float media;
     int faltas;
} aluno;

int main()
{
     aluno *p;
     int n, i;
     aluno aux;
     printf("quantos aluno deseja cadastrar: ");
     scanf("%d", &n);
     p = (aluno *)malloc(n * sizeof(aluno));

     for (i = 0; i < n; i++)
     {
          printf("Digite o nome do %dº aluno: ", i + 1);
          scanf(" %[^\n]s", p[i].nome);
          printf("Digite a media do aluno: ");
          scanf("%f", &p[i].media);
          printf("Digite a quantidade de faltas do aluno:");
          scanf("%d", &p[i].faltas);
          printf("----------------------------------------\n");
     }
     for (i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (p[i].media < p[j].media) {
                aux = p[i];
                p[i] = p[j];
                p[j] = aux;
            }
        }
    }
     printf("Alunos ordenados em ordem decrescente das medias:\n");
    for (i = 0; i < n; i++) {
        printf("%s\n", p[i].nome);
    }

    free(p);

     return 0;
}