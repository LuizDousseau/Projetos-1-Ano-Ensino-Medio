#include <stdio.h>

int main() {
    float peso, valor_compra;
    float frete_base = 0.0, acrescimo = 0.0, desconto = 0.0, frete_final = 0.0;
    int regiao;
    int pais;

    printf("Digite o peso do pacote (em kg)\n");
    scanf("%f", &peso);

    printf("\nEscolha uma regiao\n");
    printf("1-Norte\n");
    printf("2-Nordeste\n");
    printf("3-Centro-Oeste\n");
    printf("4-Sudeste\n");
    printf("5-Sul\n");
    printf("6-Internacional\n");
    scanf("%d", &regiao);

    if (regiao == 6) {
        printf("\n1-Argentina\n");
        printf("2-Paraguai\n");
        scanf("%d", &pais);
    }

    printf("\nDigite o valor total da compra (em RS)\n");
    scanf("%f", &valor_compra);

    if (peso <= 5.0) {
        frete_base = 20.00;
    } else if (peso <= 10.0) {
        frete_base = 35.00;
    } else if (peso <= 20.0) {
        frete_base = 50.00;
    } else {
        frete_base = 80.00;
    }

    if (regiao == 1) {
        acrescimo = 15.00;
    } else if (regiao == 2) {
        acrescimo = 12.00;
    } else if (regiao == 3) {
        acrescimo = 10.00;
    } else if (regiao == 4) {
        acrescimo = 0.00;
    } else if (regiao == 5) {
        if (valor_compra > 100.00) {
            desconto = 10.00;
        }
    } else if (regiao == 6) {
        if (pais == 1) {
            acrescimo = 40.00;
        } else if (pais == 2) {
            acrescimo = 30.00;
        } else {
            printf("\nPais invalido!!!\n");
            return 0; 
        }

        if (valor_compra > 200.00) {
            desconto = 20.00;
        }
    } else {
        printf("\nRegiao invalida!!!\n");
        return 0; 
    }

    frete_final = frete_base + acrescimo - desconto;

    printf("Frete base: R$ %.2f\n", frete_base);
    printf("Acrescimo aplicado: R$ %.2f\n", acrescimo);
    printf("Desconto aplicado: R$ %.2f\n", desconto);
    printf("Valor final do frete: R$ %.2f\n", frete_final);

    return 0;
}