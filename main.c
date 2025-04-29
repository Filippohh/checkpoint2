#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <locale.h>

// Fun��o para calcular a sequ�ncia de Fibonacci (feita por Filippo)
void fibonacci() {
    int N;
    printf("Digite a quantidade de termos da sequ�ncia de Fibonacci (1 a 50): ");
    scanf("%d", &N);

    if (N < 1 || N > 50) {
        printf("N�mero fora do intervalo permitido!\n");
        return;
    }

    int fibonacci[N];
    fibonacci[0] = 0;
    if (N > 1) {
        fibonacci[1] = 1;
    }

    for (int i = 2; i < N; i++) {
        fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
    }

    printf("Sequ�ncia de Fibonacci: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", fibonacci[i]);
    }
    printf("\n");
}

// Fun��o para calcular os fatoriais (feita por Pedro)
void fatoriais() {
    int N;
    printf("Digite um n�mero inteiro (1 a 20): ");
    scanf("%d", &N);

    if (N < 1 || N > 20) {
        printf("N�mero fora do intervalo permitido!\n");
        return;
    }

    long long fatorial[N];
    fatorial[0] = 1;

    for (int i = 1; i < N; i++) {
        fatorial[i] = fatorial[i - 1] * (i + 1);
    }

    printf("Fatoriais:\n");
    for (int i = 0; i < N; i++) {
        printf("%d! = %lld\n", i + 1, fatorial[i]);
    }
}

// Fun��o para verificar se uma palavra � um pal�ndromo (feita por Gustavo)
void palindromo() {
    char palavra[101];
    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    int len = strlen(palavra);
    bool is_palindrome = true;

    for (int i = 0; i < len / 2; i++) {
        if (palavra[i] != palavra[len - i - 1]) {
            is_palindrome = false;
            break;
        }
    }

    if (is_palindrome) {
        printf("A palavra � um pal�ndromo.\n");
    } else {
        printf("A palavra N�O � um pal�ndromo.\n");
    }
}

// Fun��o para verificar se uma string � uma substring de outra (feita por Filippo)
void substring() {
    char str1[101], str2[101];
    printf("Digite a primeira string: ");
    scanf("%s", str1);
    printf("Digite a segunda string: ");
    scanf("%s", str2);

    if (strstr(str1, str2)) {
        printf("A segunda string est� contida na primeira.\n");
    } else {
        printf("A segunda string N�O est� contida na primeira.\n");
    }
}

int main() {
    int opcao;
    setlocale(LC_ALL, "portuguese");

    // Menu principal
    do {
        printf("===== MENU DE EXERC�CIOS =====\n");
        printf("1 - Sequ�ncia de Fibonacci\n");
        printf("2 - Fatoriais\n");
        printf("3 - Verificar Pal�ndromo\n");
        printf("4 - Verificar Substring\n");
        printf("0 - Sair\n");
        printf("Escolha uma op��o: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                fibonacci();
                break;
            case 2:
                fatoriais();
                break;
            case 3:
                palindromo();
                break;
            case 4:
                substring();
                break;
            case 0:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Op��o inv�lida! Tente novamente.\n");
        }
    } while (opcao != 0);

    return 0;
}
// integrantes:
// Pedro Henrique Souza Barreto 564437
// Filippo Picino Mendez 565994
// Gustavo Henrique Rodovalho 563695
