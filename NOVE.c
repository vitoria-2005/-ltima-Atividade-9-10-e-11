#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(0, "Portuguese");

    int *nros, qtd, i;

    // Solicita ao usu�rio a quantidade de n�meros
    printf("Quantos n�meros deseja digitar? ");
    scanf("%d", &qtd);

    // Aloca��o din�mica do array
    nros = (int *)malloc(qtd * sizeof(int));
    if (nros == NULL) {
        printf("Erro de aloca��o de mem�ria!\n");
        return 1; // Encerra o programa se a aloca��o falhar
    }

    // Entrada: captura os n�meros do teclado
    for (i = 0; i < qtd; i++) {
        printf("Digite um n�mero: ");
        scanf("%d", &nros[i]);
    }

    // Sa�da: exibe os n�meros na ordem crescente dos �ndices
    printf("\nN�meros na ordem de entrada:\n");
    for (i = 0; i < qtd; i++) {
        printf("%d\t", nros[i]);
    }
    printf("\n");

    // Sa�da: exibe os n�meros na ordem decrescente dos �ndices
    printf("\nN�meros na ordem inversa:\n");
    for (i = qtd - 1; i >= 0; i--) {
        printf("%d\t", nros[i]);
    }
    printf("\n");

    // Libera a mem�ria alocada
    free(nros);

    return 0;
}

