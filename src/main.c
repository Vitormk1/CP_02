#include<stdio.h>

int main() {
    
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int opcao;
    float n1, n2, media;
    float coef, exp;

    do {
        // --- (2) Interface no CMD ---
        printf("\n=================================");
        printf("\n   SISTEMA ACADEMICO - VERSAO 1.0");
        printf("\n=================================");
        printf("\n1. Calcular Media e Classificacao");
        printf("\n2. Calcular Derivada (ax^n)");
        printf("\n0. Sair");
        printf("\n Escolha uma opcao: ");
        scanf("%d", &opcao);