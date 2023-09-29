#include <stdio.h>
#include <stdlib.h>



           int main() {
    int n, v, soma;
    soma = 0;

    scanf("%d", &n);

    // Store the original value of n
    v = n;
  //

    while (n > 0) {
        soma = soma + n % 10;
        n = n / 10;
    }

    // Check whether v is even or odd and print accordingly
    if (v % 2 == 0) {
        printf("%d eh par ", v);
    } else {
        printf("%d eh impar ", v);
    }

    // Print the sum of the digits
    printf("A soma dos algarismos de %d eh %d\n", v, soma);


    return 0;
}