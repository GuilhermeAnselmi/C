#include <stdio.h>

main(){
	int matriz[5][5] = {10, 11, 12, 13, 14, 
						20, 21, 22, 23, 24, 
						30, 31, 32, 33, 34, 
						40, 41, 42, 43, 44, 
						50, 51, 52, 53, 54};
	int soma = 0;
	
	for(int c = 0; c < 5; c++){
		for(int i = 0; i < 5; i++){
			printf("%i   ", matriz[c][i]);
			
			soma += matriz[c][i];
		}
		
		printf("\n");
	}
	
	printf("\nSoma Total = %i", soma);
}
