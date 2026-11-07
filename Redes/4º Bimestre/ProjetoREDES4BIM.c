#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
    int qp = 1;
	int pacotes[qp];
    int i = 1;
    int valido = 0;
    int erro = 0;
    int sequencia = 0;
    int maiorsequencia = 0;
    float porcento = 0;

    printf("Teste de envio de pacotes\n");
    printf("\nDeseja enviar quantos pacotes\n");
    scanf("%d", &qp);
    for (i = 0; i < qp; i++) {
    printf("\nQual o estado do pacote %d? (1-enviado/0-perdido):\n", i);
    scanf("%d", &pacotes[i]);
    if (pacotes[i] == 1) {
    valido++;
    sequencia = 0;
}
		else if (pacotes[i] == 0) {
	    erro++;
	    sequencia++;
	    if (sequencia > maiorsequencia) {
		 maiorsequencia = sequencia;
		}
	}
		else {
			printf("Digite 1 ou 0 !!!");
			i--;
		}
		}

   porcento = (erro * 100) / qp;
   printf("\n\nRelatorio:\n");
   printf("Perdas: %d\n", erro);
   printf("Entregues: %d \n", valido);
   printf("Maior sequencia de perdas: %d \n", maiorsequencia);
   printf("Taxa de perda: %.2f\n", porcento);
   if (porcento > 20) {
   	 printf("Alerta!!!");
   }
    return 0;
}

