#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

int main() {
    int opcao;
    float n1, n2, media;
    float coef, exp, x;
    int entradavalida;

    srand(time(NULL));

    do {
        entradavalida = 0;

        printf("\n=================================");
        printf("\n   SISTEMA ACADEMICO - VERSAO 1.0");
        printf("\n=================================");
        printf("\n1. Calcular Media e Classificacao");
        printf("\n2. Calcular Derivada (ax^n)");
        printf("\n3. Gerar Numero Aleatorio");
        printf("\n0. Sair");
        printf("\n Escolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("\n[ERRO]: Digite apenas NUMEROS!\n");
            while (getchar() != '\n'); 
            system("pause");
            continue;
        }

        switch(opcao) {
            case 1:
                printf("\n--- CALCULO DE MEDIA ---");
                printf("\nDigite a Nota 1: ");
                if (scanf("%f", &n1) != 1) { printf("Entrada invalida!"); while(getchar() != '\n'); break; }
                
                printf("Digite a Nota 2: ");
                if (scanf("%f", &n2) != 1) { printf("Entrada invalida!"); while(getchar() != '\n'); break; }

                media = (n1 + n2) / 2;
                printf("\nMedia Final: %.2f", media);

                if (media >= 7.0) printf("\nSituacao: APROVADO\n");
                else if (media >= 5.0) printf("\nSituacao: RECUPERACAO\n");
                else printf("\nSituacao: REPROVADO\n");

                system("pause");
                break;

            case 2:
                printf("\n--- DERIVADA DE f(x) = ax^n ---");
                printf("\nDigite o coeficiente (a): ");
                scanf("%f", &coef);
                printf("Digite o expoente (n): ");
                scanf("%f", &exp);

                float novoCoef = coef * exp;
                float novoExp = exp - 1;

                printf("\nA derivada e: f'(x) = %.2fx^%.2f\n", novoCoef, novoExp);

                printf("\nDigite um valor de x: ");
                scanf("%f", &x);

                float resultado = novoCoef * pow(x, novoExp);
                printf("Resultado = %.2f\n", resultado);

                system("pause");
                break;

            case 3:
                printf("\n--- NUMERO ALEATORIO ---");
                int numAleatorio = rand() % 100 + 1;
                printf("Numero gerado: %d\n", numAleatorio);
                system("pause");
                break;

            case 0:
                printf("\nSaindo do sistema...\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
                system("pause");
        }

    } while(opcao != 0);

    return 0;
}