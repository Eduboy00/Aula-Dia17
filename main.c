#import <stdio.h>
int main()
{
    int n1, n2;
    int *p1, *p2;

    p1 = &n1;
    p2 = &n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", p1);
    printf("Digite o segundo valor: ");
    scanf("%d", p2);

    printf("A soma dos valores: %d + %d = %d\n\n", *p1, *p2, ( *p1 + *p2 ));
    printf("A subtração dos valores: %d - %d = %d\n\n", *p1, *p2, ( *p1 - *p2 ));
    printf("A Divisão dos valores: %d / %d = %d\n\n", *p1, *p2, ( *p1 / *p2 ));
    printf("A Multiplicação dos valores: %d * %d = %d\n\n", *p1, *p2, ( *p1 * *p2 ));
    return 0;
}

// Utilizando funções
int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int divisao(int a, int b) {
    return a / b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int main() {
    int n1, n2;
    int *p1, *p2;

    p1 = &n1;
    p2 = &n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", p1);
    printf("Digite o segundo valor: ");
    scanf("%d", p2);

    printf("A soma dos valores: %d + %d = %d\n\n", *p1, *p2, soma(*p1, *p2));
    printf("A subtração dos valores: %d - %d = %d\n\n", *p1, *p2, subtracao(*p1, *p2));
    printf("A Divisão dos valores: %d / %d = %d\n\n", *p1, *p2, divisao(*p1, *p2));
    printf("A Multiplicação dos valores: %d * %d = %d\n\n", *p1, *p2, multiplicacao(*p1, *p2));
    
    return 0;
}

#include <stdio.h>

int soma(int a, int b) {
    return a + b;
}

int subtracao(int a, int b) {
    return a - b;
}

int divisao(int a, int b) {
    return a / b;
}

int multiplicacao(int a, int b) {
    return a * b;
}

int main() {
    int n1, n2;
    int *p1, *p2;
    char operador;

    p1 = &n1;
    p2 = &n2;

    printf("Digite o primeiro valor: ");
    scanf("%d", p1);
    printf("Digite o segundo valor: ");
    scanf("%d", p2);

    printf("Escolha um operador (+, -, /, *): ");
    scanf(" %c", &operador);

    switch (operador) {
        case '+':
            printf("A soma dos valores: %d + %d = %d\n\n", *p1, *p2, soma(*p1, *p2));
            break;
        case '-':
            printf("A subtração dos valores: %d - %d = %d\n\n", *p1, *p2, subtracao(*p1, *p2));
            break;
        case '/':
            printf("A Divisão dos valores: %d / %d = %d\n\n", *p1, *p2, divisao(*p1, *p2));
            break;
        case '*':
            printf("A Multiplicação dos valores: %d * %d = %d\n\n", *p1, *p2, multiplicacao(*p1, *p2));
            break;
        default:
            printf("Operador inválido.\n");
            break;
    }
    
    return 0;
}
