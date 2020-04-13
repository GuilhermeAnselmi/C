#include <stdio.h>

main(){
	int soma = 0, x, cont = 0;
	
	while(cont < 3){
		printf("Digite um valor > ");
		scanf("%i", &x, "\n");
		soma = soma + x + cont;
		cont += 1;
	}
	
	printf("%i", soma);
}
