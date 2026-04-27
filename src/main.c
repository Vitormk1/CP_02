#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}

int main() {
    int opcao;
    float n1, n2, media;
    float coef, exp, x;
    srand((unsigned int)time(NULL));

    do {
        printf("\n=================================");
        printf("\n   SISTEMA ACADEMICO - V1.1");
        printf("\n=================================");
        printf("\n1. Calcular Media e Classificacao");
        printf("\n2. Calcular Derivada (ax^n)");
        printf("\n3. Gerar Numero Aleatorio (1-100)");
        printf("\n0. Sair");
        printf("\n=================================");
        printf("\nEscolha uma opcao: ");

        if (scanf("%d", &opcao) != 1) {
            printf("\n[ERRO]: Entrada invalida! Digite um numero.\n");
            limparBuffer();
            continue;
        }

        switch(opcao) {
            case 1:
                printf("\n--- CALCULO DE MEDIA ---");
                printf("\nNota 1: ");
                if (scanf("%f", &n1) != 1) { printf("Erro na nota!\n"); limparBuffer(); break; }
                
                printf("Nota 2: ");
                if (scanf("%f", &n2) != 1) { printf("Erro na nota!\n"); limparBuffer(); break; }

                media = (n1 + n2) / 2.0f;
                printf("\nMedia Final: %.2f", media);

                if (media >= 7.0f)      printf("\nSituacao: APROVADO\n");
                else if (media >= 5.0f) printf("\nSituacao: RECUPERACAO\n");
                else                   printf("\nSituacao: REPROVADO\n");
                break;

            case 2:
                printf("\n--- DERIVADA DE f(x) = ax^n ---");
                printf("\nCoeficiente (a): ");
                scanf("%f", &coef);
                printf("Expoente (n): ");
                scanf("%f", &exp);

                float novoCoef = coef * exp;
                float novoExp = exp - 1.0f;

                if (exp == 0) printf("\nA derivada e: f'(x) = 0\n");
                else printf("\nA derivada e: f'(x) = %.2fx^%.2f\n", novoCoef, novoExp);

                printf("\nCalcular para x = ");
                scanf("%f", &x);

                float resultado = novoCoef * powf(x, novoExp);
                printf("Resultado f'(%.2f) = %.2f\n", x, resultado);
                break;


            case 3:
                printf("\n--- NUMERO ALEATORIO ---");
                printf("\nNumero gerado: %d\n", (rand() % 100) + 1);
                break;

            case 0:
                printf("\nEncerrando o programa...\n");
                break;

            default:
                printf("\n[AVISO]: Opcao %d invalida!\n", opcao);
        }

        if (opcao != 0) {
            printf("\nPressione ENTER para continuar...");
            limparBuffer(); 
            getchar();      
        }

    } while(opcao != 0);

    return 0;
}