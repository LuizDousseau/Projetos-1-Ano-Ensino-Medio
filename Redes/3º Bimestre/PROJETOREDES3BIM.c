#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	int menu, i;

    for (i = 1; i <= 5; i++) 
	{
    
	printf("\nConsulta %d", i);	
    printf("\nQual servidor deseja consultar o IP?\n");
    printf("1. google.com\n");
    printf("2. univap.br\n");
    printf("3. github.com\n");
    printf("4. Outro\n");
    scanf("%d", &menu);
    
    if (menu == 1) {
    	printf("\ngoogle.com -> 10.0.0.10\n");
	} 
	else if (menu == 2) {
	    printf("\nunivap.br -> 10.0.0.20\n");
	}
	else if (menu == 3) {
	    printf("\ngithub.com -> 10.0.0.30\n");
	}
	else if (menu == 4) {
	    printf("\nNao encontrado\n");
	}
	else{
		printf("\nDigite uma opcao valida.\n");
	}
	
	}

	return 0; 
}
