#include <stdio.h>


int main() {

    int opcao;

    int num;

    int potencia;

    int digito;

    int decimal;

    int base;


    do {

        printf("\nBem vindo ao programa de conversao!!! (Digite o numero que esta ao lado da sua opcao desejada)\n");

        printf("1. Decimal para Binario\n");

        printf("2. Decimal para Hexadecimal (valor maximo em decimal: 255)\n");

        printf("3. Decimal para Octal\n");

        printf("4. Octal para Decimal\n");

        printf("5. Binario de 8 digitos para Decimal\n");

        printf("6. Binario de 8 digitos para Hexadecimal\n");

        printf("7. Sair\n");

        printf("Escolha uma opcao: ");
		
        scanf("%d", &opcao);


        switch (opcao) {

            case 1: {

                printf("Digite o numero decimal: ");

                scanf("%d", &num); 

                printf("Resultado: ");

                if (num == 0) {

                    printf("0");

                } else {

                    potencia = 1;

                    while (potencia <= num / 2) {

                        potencia *= 2;

                    }

                    while (potencia > 0) {

                        printf("%d", num / potencia);

                        num %= potencia;

                        potencia /= 2;

                    }

                }

                printf("\n");

                break;

            }

            case 2: {

                printf("Digite o numero decimal (max 255): ");

                scanf("%d", &num);

                if (num < 0 || num > 255) {

                    printf("Numero invalido!!! Digite entre 0 e 255\n");

                } else {

                    printf("Resultado: ");

                    if (num == 0) {

                        printf("0");

                    } else {

                        potencia = 1;

                        while (potencia <= num / 16) {

                            potencia *= 16;

                        }

                        while (potencia > 0) {

                            digito = num / potencia;

                            if (digito < 10) {

                                printf("%d", digito);

                            } else {

                                printf("%c", 'A' + (digito - 10));

                            }

                            num %= potencia;

                            potencia /= 16;

                        }

                    }

                    printf("\n");

                }

                break;

            }

            case 3: {

                printf("Digite o numero decimal: ");

                scanf("%d", &num);

                printf("Resultado: ");

                if (num == 0) {

                    printf("0");

                } else {

                    potencia = 1;

                    while (potencia <= num / 8) {

                        potencia *= 8;

                    }

                    while (potencia > 0) {

                        printf("%d", num / potencia);

                        num %= potencia;

                        potencia /= 8;

                    }

                }

                printf("\n");

                break;

            }

            case 4: {

                printf("Digite o numero octal: ");

                scanf("%d", &num);

                decimal = 0;

                base = 1;

                while (num > 0) {

                    digito = num % 10;

                    decimal += digito * base;

                    base *= 8;

                    num /= 10;

                }

                printf("Resultado: %d\n", decimal);

                break;

            }

            case 5: {

                printf("Digite o numero binario (ate 8 digitos, so Zero(0) e Um(1), senao vai dar errado!!!): ");

                scanf("%d", &num);
                
                decimal = 0;

                base = 1;
                
             
				

                while (num > 0) {

                    digito = num % 10;

                    decimal += digito * base;

                    base *= 2;

                    num /= 10;

                }

                printf("Resultado: %d\n", decimal);

                break;

            }

            case 6: {

                printf("Digite o numero binario (Digite ate 8 digitos, so Zero(0) e Um(1), senao vai dar errado!!!): ");

                scanf("%d", &num);

                decimal = 0;

                base = 1;

                while (num > 0) {

                    digito = num % 10;

                    decimal += digito * base;

                    base *= 2;

                    num /= 10;

                }

                printf("Resultado: ");

                if (decimal == 0) {

                    printf("0");

                } else {

                    potencia = 1;

                    while (potencia <= decimal / 16) {

                        potencia *= 16;

                    }

                    while (potencia > 0) {

                        digito = decimal / potencia;

                        if (digito < 10) {

                            printf("%d", digito);

                        } else {

                            printf("%c", 'A' + (digito - 10));

                        }

                        decimal %= potencia;

                        potencia /= 16;

                    }

                }

                printf("\n");

                break;

            }

            case 7:

                printf("Saindo!!!\n");

                break;

            default:

                printf("Opcao invalida!!!\n");

                break;

        }

    } while (opcao != 7);


    return 0;

}

