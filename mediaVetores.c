/*Escrever um programa que leia um vetor de 30 elementos inteiros e no final mostre os
valores do vetor que são maiores do que a media dos valores digitados.*/

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{

    setlocale(LC_ALL, "Portuguese");

    int *vetor;
    int numero,i;
    double soma = 0.0;


    printf("Informe o tamanho do seu vetor: \n");
    scanf("%d", &numero);

    if (numero <= 0)
    {
        printf("Numero de elementos invalido\n");
        return(1);
    }

    vetor = (int *) malloc(numero * sizeof(int));
    if (vetor == NULL)
    {
        printf("Erro: nao foi possivel alocar memoria.\n");
        exit(1);
    }

    //Armazenando os dados em um vetor
    for (i = 0; i < numero; i++)
    {
        printf("Digite o valor para a posicao %d do vetor: ", i+1);
        scanf("%d",&vetor[i]);
        soma += vetor[i];
    }

    double media = soma / numero;

    // imprimindo valor(es) do vetor maior(es) que a média

    printf("Valores do vetor maiores que a média %.2f:\n", media:);
    for (i = 0; i < numero; i++)
    {
        if (vetor[i] > media)
        {
            printf("%d\n", vetor[i]);
        }
    }

    //liberando o espaço de memória alocado
    free(vetor);

    return 0;
}


