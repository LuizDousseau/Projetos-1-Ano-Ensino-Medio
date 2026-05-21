#include <stdio.h>

int main()
{

    int menu;


    printf("Qual a sua necessidade?\n");
    printf("1. Hospedar site\n");
    printf("2. Guardar arquivos\n");
    printf("3. Enviar e receber e-mails\n");
    printf("4. Armazenar dados\n");
    printf("5. Distribuir IP automaticamente\n");
    printf("6. Traduzir domínio para IP\n");
    printf("7. Filtrar acesso à internet\n");
    printf("8. Fazer backup\n");
    scanf("%d", &menu);

 switch (menu)
{
    case 1:
        printf("Servidor recomendado: Servidor Web\n");
        printf("Motivo : hospeda sites e aplicacoes acessadas pelo navegador\n");
        break;
    case 2:
        printf("Servidor recomendado: Servidor de Arquivos\n");
        printf("Motivo : armazena e gerencia arquivos no servidor (Nuvem)\n");
        break;
    case 3:
        printf("Servidor recomendado: Servidor de E-mail\n");
        printf("Motivo : envia,recebe e armazena e-mails\n");
        break;
    case 4:
        printf("Servidor recomendado: Servidor de Banco de Dados\n");
        printf("Motivo : armazena e gerencia dados no servidor\n");
        break;
    case 5:
        printf("Servidor recomendado: Servidor DHCP\n");
        printf("Motivo : distribui endereços IP automaticamente\n");
        break;
    case 6:
        printf("Servidor recomendado: Servidor DNS\n");
        printf("Motivo : traduz domínios para endereços IP\n");
        break;
    case 7:
        printf("Servidor recomendado: Servidor Proxy\n");
        printf("Motivo : filtra acesso à internet, deixando mais seguro e evitando acessos não autorizados\n");
        break;
    case 8:
        printf("Servidor recomendado: Servidor de Backup\n");
        printf("Motivo : faz backup de dados no servidor (Nuvem)\n");
        break;
    default:
        printf("Opcao invalida!!!\n");
}


    return 0;
}