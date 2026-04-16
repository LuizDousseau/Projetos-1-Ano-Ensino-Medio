#include <stdio.h>

int main() {
float peso, valor_compra;
float frete_base = 0.0, acrescimo = 0.0, desconto = 0.0, frete_final = 0.0;
char regiao;
char pais;

printf("Digite o peso do pacote (em kg)\n");
scanf("%f", &peso);

printf("\nEscolha uma regiao\n");
printf("N-Norte\n");
printf("E-Nordeste\n");
printf("C-Centro-Oeste\n");
printf("D-Sudeste\n");
printf("S-Sul\n");
printf("I-Internacional\n");
scanf(" %c", &regiao);

if (regiao == 'I' || regiao == 'i') {
printf("\nA-Argentina\n");
printf("P-Paraguai\n");
scanf(" %c", &pais);
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

if (regiao == 'N' || regiao == 'n')  {
acrescimo = 15.00;
} else if (regiao == 'E' || regiao == 'e') {
acrescimo = 12.00;
} else if (regiao == 'C' || regiao == 'c') {
acrescimo = 10.00;
} else if (regiao == 'D' || regiao == 'd') {
acrescimo = 0.00;
} else if (regiao == 'S' || regiao == 's') {
if (valor_compra > 100.00) {
desconto = 10.00;
}
} else if (regiao == 'I' || regiao == 'i') {
if (pais == 'A' || pais == 'a') {
acrescimo = 40.00;
} else if (pais == 'P' || pais == 'p') {
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
