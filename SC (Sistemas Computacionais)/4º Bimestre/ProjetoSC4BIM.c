#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int tamanho[50];
    char funcionar = 's';
    char nome[50][50];
    int Q = 0;
    int i;
    char mais = 's';

    printf("Programa fila FIFO\n");
    while (funcionar == 's' || funcionar == 'S') {
    printf("\nDeseja executar a fila? (S/N)\n");
    scanf(" %c", &funcionar);

    if (funcionar != 's' && funcionar != 'S') {
    printf("Fechando Programa...");
    break;
    }
    printf("\nDeseja adicionar mais um programa a fila? (S/N)\n");
    scanf(" %c", &mais);
    if (mais == 's' || mais == 'S') {
	printf("\nDigite o nome do seu processo:\n");
    scanf("%49s", nome[Q]);
    printf("\nQual o tamanho do seu processo? (MB)\n");
    scanf("%d", &tamanho[Q]);
	    Q++;
}

    printf("\nFila atual: (Velocidade: 1MB/s)\n");
    for (i = 0; i < Q; i++) {
    printf("%s %dMB\n", nome[i], tamanho[i]);
    }
    if (Q > 0) {
    printf("\nExecutando: %s\n", nome[0]);
    if (tamanho[0] > 1) {
    tamanho[0] -= 1;
    } else {
    printf("Processo: %s finalizado\n", nome[0]);

    for (i = 0; i < Q - 1; i++) {
    strcpy(nome[i], nome[i + 1]);
    tamanho[i] = tamanho[i + 1];
}
    Q--;
    }
}
    }
    return 0;
}

