#include <stdio.h>

int main() {
    int cpu, gpu, hd, ram;
    int pag;
    float total = 0, desconto = 0, final = 0;

    char *nome_cpu, *nome_ram, *nome_hd, *nome_gpu;

    printf("Escolha o Processador\n");
    printf("1. Intel i3-6006U   (2 Ghz) - RS 600.00\n");
    printf("2. Intel i7-7567U   (4 Ghz) - RS 1200.00\n");
    printf("3. Intel Pentium 4  (5 Ghz) - RS 2000.00\n");
    printf("Opcao: ");
    scanf("%d", &cpu);

    if (cpu == 1) {
        total += 600;
        nome_cpu = "Intel i3-6006U";
    } else if (cpu == 2) {
        total += 1200;
        nome_cpu = "Intel i7-7567U";
    } else if (cpu == 3) {
        total += 2000;
        nome_cpu = "Intel i7-1360P";
    }

    printf("\nEscolha a Memoria RAM\n");
    printf("1. 8GB DDR4 - RS 200.00\n");
    printf("2. 16GB DDR4 - RS 350.00\n");
    printf("3. 32GB DDR5 - RS 800.00\n");
    printf("Opcao: ");
    scanf("%d", &ram);

    if (ram == 1) {
        total += 200;
        nome_ram = "8GB DDR4";
    } else if (ram == 2) {
        total += 350;
        nome_ram = "16GB DDR4";
    } else if (ram == 3) {
        total += 800;
        nome_ram = "32GB DDR5";
    }

    printf("\nEscolha o Armazenamento\n");
    printf("1. HD 1TB    - RS 250.00\n");
    printf("2. SSD 500GB - RS 300.00\n");
    printf("3. SSD 1TB   - RS 550.00\n");
    printf("Opcao: ");
    scanf("%d", &hd);

    if (hd == 1) {
        total += 250;
        nome_hd = "HD 1TB";
    } else if (hd == 2) {
        total += 300;
        nome_hd = "SSD 500GB";
    } else if (hd == 3) {
        total += 550;
        nome_hd = "SSD 1TB";
    }

    printf("\nEscolha a Placa de Video\n");
    printf("1. Video Integrado - RS 0.00\n");
    printf("2. AMD RX 580      - RS 1300.00\n");
    printf("3. Nvidia RTX 5070 - RS 2500.00\n");
    printf("Opcao: ");
    scanf("%d", &gpu);

    if (gpu == 1) {
        total += 0;
        nome_gpu = "Video Integrado";
    } else if (gpu == 2) {
        total += 1300;
        nome_gpu = "AMD RX 580";
    } else if (gpu == 3) {
        total += 2500;
        nome_gpu = "Nvidia RTX 5070";
    }

    printf("\nForma de Pagamento\n");
    printf("1. A vista (10 porcento de desconto)\n");
    printf("2. Parcelado (Sem desconto)\n");
    printf("Opcao: ");
    scanf("%d", &pag);

    if (pag == 1) {
        desconto = total * 0.10;
    } else {
        desconto = 0;
    }

    final = total - desconto;

    printf("\nRESUMO\n");
    printf("Processador: %s\n", nome_cpu);
    printf("Memoria RAM: %s\n", nome_ram);
    printf("Armazenamento: %s\n", nome_hd);
    printf("Placa de Video: %s\n", nome_gpu);
    printf("TOTAL: RS %.2f\n", final);

    printf("\nClassificacao: ");
    if (total <= 1500.0) {
        printf("BASICA\n");
        printf("\nSugestoes:\n");
        printf("Entrada: Teclado de membrana e mouse simples.\n");
        printf("Saida: Monitor HD 60Hz e caixas de som.\n");
    } 
    else if (total > 1500.0 && total <= 3500.0) {
        printf("INTERMEDIARIA\n");
        printf("\nSugestoes:\n");
        printf("Entrada: Teclado semimecanico e mouse gamer de entrada.\n");
        printf("Saida: Monitor full HD 75Hz e headset basico.\n");
    } 
    else {
        printf("AVANCADA/GAMER\n");
        printf("\nSugestoes:\n");
        printf("Entrada: Teclado mecanico e mouse Gamer.\n");
        printf("Saida: Monitor 2k 144Hz e headset Gamer.\n");
    }
    return 0;
}