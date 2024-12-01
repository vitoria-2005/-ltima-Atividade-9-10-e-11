#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "Portuguese");

    int *nros, qtd, i;

    // Solicita ao usuário a quantidade de números
    printf("Quantos números deseja digitar? ");
    scanf("%d", &qtd);

    // Alocação dinâmica do array
    nros = (int *)malloc(qtd * sizeof(int));
    if (nros == NULL) {
        printf("Erro de alocação de memória!\n");
        return 1; // Encerra o programa se a alocação falhar
    }

    // Entrada: captura os números do teclado
    for (i = 0; i < qtd; i++) {
        printf("Digite um número: ");
        scanf("%d", &nros[i]);
    }

    // Saída: exibe os números na ordem crescente dos índices
    printf("\nNúmeros na ordem de entrada:\n");
    for (i = 0; i < qtd; i++) {
        printf("%d\t", nros[i]);
    }
    printf("\n");

    // Saída: exibe os números na ordem decrescente dos índices
    printf("\nNúmeros na ordem inversa:\n");
    for (i = qtd - 1; i >= 0; i--) {
        printf("%d\t", nros[i]);
    }
    printf("\n");

    // Libera a memória alocada
    free(nros);

    return 0;
}

