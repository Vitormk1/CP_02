#include <stdio.h>

int main() {
    int opcao;
    float nota1, nota2, media;

    while (1) {
        printf("\n====== SISTEMA DE NOTAS ======\n");
        printf("1 - Calcular media\n");
        printf("2 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {

            case 1:
                printf("\nDigite a primeira nota: ");
                scanf("%f", &nota1);

                printf("Digite a segunda nota: ");
                scanf("%f", &nota2);

                media = (nota1 + nota2) / 2;

                printf("\nMedia: %.2f\n", media);

                if (media >= 6) {
                    printf("Status: APROVADO\n");
                } else if (media >= 4) {
                    printf("Status: RECUPERACAO\n");
                } else {
                    printf("Status: REPROVADO\n");
                }

                break;

            case 2:
                printf("Saindo do sistema...\n");
                return 0;

            default:
                printf("Opcao invalida! Tente novamente.\n");
        }
    }

    return 0;
}