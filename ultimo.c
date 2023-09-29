#include <stdio.h>

int main() {
    int valor1, valor2;

    // Solicita ao usuário para inserir os valores
    printf("Digite o primeiro valor inteiro: ");
    scanf("%d", &valor1);

    printf("Digite o segundo valor inteiro: ");
    scanf("%d", &valor2);

    // Verifica qual valor é o maior e imprime
    if (valor1 > valor2) {
        printf("%d eh maior que %d ", valor1, valor2);
        if (valor1 % valor2 == 0) {
            printf("%d eh multiplo de %d\n", valor1, valor2);
        } else {
            printf("%d nao eh multiplo de %d\n", valor1, valor2);
        }
    } else if (valor2 > valor1) {
        printf("%d eh maior que %d ", valor2, valor1);
        if (valor2 % valor1 == 0) {
            printf("%d eh multiplo de %d\n", valor2, valor1);
        } else {
            printf("%d nao eh multiplo de %d\n", valor2, valor1);
        }


    } else {
        printf("Os dois valores sao iguais.\n");
    }

    return 0;
}