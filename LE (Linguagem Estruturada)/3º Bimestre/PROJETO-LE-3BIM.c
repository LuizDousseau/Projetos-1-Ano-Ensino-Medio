#include <stdio.h>
#include <string.h>

int main() {
    int pontos[5][6];
    char esportes[6][20] = {"Futsal", "Volei", "Basquete", "Handebol", "Tenis Mesa", "Xadrez"};
    char turmas[5][10] = {"1o F", "1o H", "1o I", "1o J", "1o L"};
    float estatisticas[6];
    int melhores[6];
    int i, j;
    int soma = 0;
    int maior;
    int menor;
    int qt, qtdAcimaMedia = 0;
    int qtdExcelentes = 0;
    int excelentesTurma[5] = {0};
    int turmaMaisExcelentes = 0;

    printf("\n");
    printf("CAMPEONATO INTERCLASSES UNIVAP CENTRO");
    printf("\n");
    for (i = 0; i < 5; i++) {
        printf("Turma: %s\n", turmas[i]);

        for (j = 0; j < 6; j++) {
            do {
                printf("Digite os pontos de %s: ", esportes[j]);
                scanf("%d", &pontos[i][j]);

                if (pontos[i][j] < 10) {
                    printf("[ERRO] A pontuacao deve ser no minimo 10.\n");
                }
            } 
        while (pontos[i][j] < 10);
        }
        printf("\n");
    }

    maior = pontos[0][0];
    menor = pontos[0][0];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 6; j++) {
            soma += pontos[i][j];
              if (pontos[i][j] > maior) {
                maior = pontos[i][j];
            }
            if (pontos[i][j] < menor) {
                menor = pontos[i][j];
            }
            if (pontos[i][j] > 80) {
                qtdExcelentes++;
                excelentesTurma[i]++;
            }
        }
    }
    estatisticas[0] = (float)soma / 30;
    estatisticas[1] = maior;
    estatisticas[2] = menor;
    for (i = 0; i < 5; i++) {
        float somaTurma = 0;
        float mediaTurma;
        for (j = 0; j < 6; j++) {
            somaTurma += pontos[i][j];
        }

        mediaTurma = somaTurma / 6;

        if (mediaTurma > estatisticas[0]) {
            qtdAcimaMedia++;
        }
    }
   estatisticas[3] = qtdAcimaMedia;
    estatisticas[4] = qtdExcelentes;
    for (i = 1; i < 5; i++) {
        if (excelentesTurma[i] > excelentesTurma[turmaMaisExcelentes]) {
            turmaMaisExcelentes = i;
        }
    }
    estatisticas[5] = turmaMaisExcelentes;

    for (j = 0; j < 6; j++) {
        melhores[j] = 0;

        for (i = 1; i < 5; i++) {
            if (pontos[i][j] > pontos[melhores[j]][j]) {
                melhores[j] = i;
            }
        }
    }
    printf("\n");
    printf("TABELA DE PONTUACOES");
    printf("\n");

    printf("%-10s", "Turma");

    for (j = 0; j < 6; j++) {
        printf("%-12s", esportes[j]);
    }
    printf("\n");

    for (i = 0; i < 5; i++) {
        printf("%-10s", turmas[i]);

        for (j = 0; j < 6; j++) {
            printf("%-12d", pontos[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("ESTATISTICAS");
    printf("\n");
    printf("Media geral: %.2f\n", estatisticas[0]);
    printf("Maior pontuacao: %.0f\n", estatisticas[1]);
    printf("Menor pontuacao: %.0f\n", estatisticas[2]);
    printf("Turmas acima da media: %.0f\n", estatisticas[3]);
    printf("Placares excelentes: %.0f\n", estatisticas[4]);
    printf("Indice da turma com mais excelentes: %.0f (%s)\n", estatisticas[5], turmas[turmaMaisExcelentes]);
    printf("\n");
    printf("CAMPEOES POR ESPORTE");
    printf("\n");

    for (j = 0; j < 6; j++) {
        printf(
            "Esporte: %s  Turma: %s\n", esportes[j], turmas[melhores[j]]);
    }
    char busca[10];
    char continuar;
    int encontrada;

    do {
        encontrada = 0;
        printf("\n");
        printf("BUSCA DE TURMA");
        printf("\n");
        printf("Digite o nome da turma (ex: 1o F): ");
        scanf(" %[^\n]", busca);

        for (i = 0; i < 5; i++) {
            if (strcmp(busca, turmas[i]) == 0) {
                float somaBusca = 0;
                float mediaBusca;
                encontrada = 1;
                printf("\nTurma encontrada: %s", turmas[i]);
                printf("\n");

                for (j = 0; j < 6; j++) {
                    printf("%s: %d pontos\n", esportes[j], pontos[i][j]);
                    somaBusca += pontos[i][j];
                }
                mediaBusca = somaBusca / 6;
                printf("\n");
                printf("Media da turma: %.2f\n", mediaBusca);
                break;
            }
        }
        if (!encontrada) {
            printf("\n[ERRO] Turma nao localizada na base de dados.\n");
        }
        printf("\nDeseja realizar outra busca? (s/n): ");
        scanf(" %c", &continuar);
} 
while (continuar == 's' || continuar == 'S');
    printf("\n");
    printf("FIM DO PROGRAMA");
    printf("\n");


    return 0;
}

