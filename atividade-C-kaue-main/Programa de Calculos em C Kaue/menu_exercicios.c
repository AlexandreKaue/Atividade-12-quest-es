#include <stdio.h>

void exercicio1() {
    int N;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    for (int i = 0; i <= N; i++) {
        printf("%d ", i);
    }
    printf("\n");
}

void exercicio2() {
    int N;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &N);
    for (int i = N; i >= 0; i--) {
        printf("%d ", i);
    }
    printf("\n");
}

void exercicio3() {
    int N, count = 0, num = 1;
    printf("Digite um numero: ");
    scanf("%d", &N);
    while (count < N) {
        printf("%d ", num);
        num += 2;
        count++;
    }
    printf("\n");
}

void exercicio4() {
    for (int i = 1, count = 0; count < 5; i++) {
        if (i % 3 == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("\n");
}

void exercicio5() {
    int soma = 0;
    for (int i = 0; i < 100; i += 2) {
        soma += i;
    }
    printf("Soma dos 50 primeiros pares: %d\n", soma);
}

void exercicio6() {
    for (int i = 10; i >= 0; i--) {
        printf("%d\n", i);
    }
    printf("FIM!\n");
}

void exercicio7() {
    int valor, soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um valor: ");
        scanf("%d", &valor);
        soma += valor;
    }
    printf("Soma = %d\n", soma);
}

void exercicio8() {
    int valor, soma = 0;
    for (int i = 0; i < 10; i++) {
        printf("Digite um numero inteiro: ");
        scanf("%d", &valor);
        soma += valor;
    }
    float media = soma / 10.0;
    printf("Media = %.2f\n", media);
}

void exercicio9() {
    int num, menor, maior;
    printf("Digite um numero: ");
    scanf("%d", &num);
    menor = maior = num;

    for (int i = 1; i < 10; i++) {
        printf("Digite outro numero: ");
        scanf("%d", &num);
        if (num < menor) menor = num;
        if (num > maior) maior = num;
    }
    printf("Menor: %d, Maior: %d\n", menor, maior);
}

void exercicio10() {
    int num, soma = 0, count = 0;
    while (count < 10) {
        printf("Digite um numero positivo: ");
        scanf("%d", &num);
        if (num > 0) {
            soma += num;
            count++;
        }
    }
    float media = soma / 10.0;
    printf("Media = %.2f\n", media);
}

void exercicio11() {
    int num;
    printf("Digite um numero positivo: ");
    scanf("%d", &num);
    printf("Divisores de %d: ", num);
    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

void exercicio12() {
    int num, soma = 0;
    printf("Digite um numero: ");
    scanf("%d", &num);
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }
    printf("Soma dos divisores (sem ele mesmo): %d\n", soma);
}

void exercicio13() {
    int soma = 0;
    for (int i = 1; i < 1000; i++) {
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i;
        }
    }
    printf("Soma = %d\n", soma);
}

int main() {
    int opcao;

    do {
        printf("\nMENU DE EXERCICIOS:\n");
        printf("1 - Numeros de 0 a N (crescente)\n");
        printf("2 - Numeros de N a 0 (decrescente)\n");
        printf("3 - N primeiros impares\n");
        printf("4 - 5 primeiros multiplos de 3\n");
        printf("5 - Soma dos 50 primeiros pares\n");
        printf("6 - Contagem regressiva\n");
        printf("7 - Soma de 10 valores\n");
        printf("8 - Media de 10 inteiros\n");
        printf("9 - Menor e maior entre 10 numeros\n");
        printf("10 - Media de 10 inteiros positivos\n");
        printf("11 - Divisores de um numero\n");
        printf("12 - Soma dos divisores (sem ele mesmo)\n");
        printf("13 - Soma dos naturais < 1000 multiplos de 3 ou 5\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: exercicio1(); break;
            case 2: exercicio2(); break;
            case 3: exercicio3(); break;
            case 4: exercicio4(); break;
            case 5: exercicio5(); break;
            case 6: exercicio6(); break;
            case 7: exercicio7(); break;
            case 8: exercicio8(); break;
            case 9: exercicio9(); break;
            case 10: exercicio10(); break;
            case 11: exercicio11(); break;
            case 12: exercicio12(); break;
            case 13: exercicio13(); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opcao invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
