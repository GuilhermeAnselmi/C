#include <stdio.h>

main(){
	int cont = 0;
	float vel, media, max, soma;
	
	for(int c = 1; c <= 5; c ++){
		printf("\nDia %i", c);
		
		for(int c = 1; c <= 3; c ++){
			printf("\nVelocidade estacao %i > ", c);
			scanf("%f", &vel);
			
			if(vel > max){
				max = vel;
			}
			
			cont ++;
			soma += vel;
		}
	}
	
	media = soma / cont;
	
	printf("\nA media de velocidade e: %.2f", media);
	printf("\nA velocidade maxima registrada foi de: %.2f", max);
}
