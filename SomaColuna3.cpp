#include <stdio.h>

main(){
	int matriz[5][5] = {10, 11, 12, 13, 14, 
						20, 21, 22, 23, 24, 
						30, 31, 32, 33, 34, 
						40, 41, 42, 43, 44, 
						50, 51, 52, 53, 54};
	int soma = 0;
						
	for(int i = 0; i < 5; i++){
		soma += matriz[i][3];
	}
	
	printf("\nSoma da Coluna 3: %i", soma);
}
