#include <stdio.h>

main(){
	int zero, cont = 0;
	float salar, media, maior = 0, soma;
	
	while(true){
		printf("\nQual seu salario? [digite 0 para finalizar]> ");
		scanf("%f", &salar);
		
		if(salar == 0){
			break;
		}
		
		cont ++;
		soma += salar;
		
		if(salar > maior){
			maior = salar;
		}
	}
	
	media = soma / cont;
	
	printf("\nA media de todos os salarios e: %.2f", media);
	printf("\nO maior salario foi: %.2f", maior);
}
