#include <stdio.h>

main(){
	int idade, soma = 0, cont = 0;
	float media = 0;
	
	printf("Idade > ");
	scanf("%i", &idade);
	
	while(idade != 0){
		cont += 1;
		soma += idade;
		printf("Idade > ");
		scanf("%i", &idade);
	}
	
	media = soma / cont;
	
	printf("A media entre as idades e de %f", media);
}
