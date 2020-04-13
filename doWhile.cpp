#include <stdio.h>

main(){
	int idade, soma = 0, cont = -1;
	float media = 0;
	
	do{
		printf("Idade > ");
		scanf("%i", &idade);
		cont += 1;
		soma += idade;
	} while(idade != 0);
	
	media = soma / cont;
	
	printf("A media entre as idades e de %f", media);
}
