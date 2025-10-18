// ============================================================================
//         PROJETO WAR ESTRUTURADO - DESAFIO DE CÓDIGO
// ============================================================================
//        
// ============================================================================
#include <stdio.h>
#include <string.h>

#define QTD 5

/* struct simples para guardar os dados do territorio */
typedef struct {
    char nome[30];
    char cor[10];
    int tropas;
} Territorio;

int main(void) {
    Territorio t[QTD];
    int i;

    printf("Cadastro de Territorios\n");

    /* entrada dos 5 territorios */
    for (i = 0; i < QTD; i++) {
        printf("\nTerritorio %d:\n", i + 1);

        printf("Nome: ");
        scanf(" %29[^\n]", t[i].nome);   /* lê com espaços */

        printf("Cor do exercito (uma palavra): ");
        scanf(" %9s", t[i].cor);         /* simples, sem espaços */

        printf("Tropas: ");
        scanf(" %d", &t[i].tropas);
    }

    /* exibicao dos dados */
    printf("\nLista de Territorios:\n");
    for (i = 0; i < QTD; i++) {
        printf("%d) %s | %s | %d tropas\n",
               i + 1, t[i].nome, t[i].cor, t[i].tropas);
    }

    return 0;

}
