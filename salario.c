#include <stdio.h>

int main() {
    char nivel;
    
   
float salario, aumento, novoSalario;

    // Solicita o nível de experiência do funcionário
    printf("Informe o nível de experiência (a, b ou c): ");
    scanf(" %c", &nivel);

    

   
// Solicita o salário atual do funcionário
    
   
printf("Informe o salário atual: ");
    scanf("%f", &salario);

    // Calcula o aumento com base no nível de experiência
    switch (nivel) {
        case 'a':
            aumento = salario * 0.05;
            break;
        case 'b':
            aumento = salario * 0.07;
            break;
        case 'c':
            aumento = salario * 0.08;
            
           
break;
        default:
            printf("Nível de experiência inválido.\n");
            return 1; // Encerra o programa com código de erro
    }

    // Calcula o novo salário
    novoSalario = salario + aumento;

    // Exibe o aumento e o novo salário
    printf("Aumento: R$ %.2f\n", aumento);
    printf("Novo salário: R$ %.2f\n", novoSalario);

    return 0;
}