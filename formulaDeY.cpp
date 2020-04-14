#include <stdio.h>

main(){
	int x;
	
	printf("Para a formula de y = 2 x 3 - 4 x 2 + x\n Vou calcular o valor de y modificando o x de -3 a 5\n");
	
	for(int c = -3; c <= 5; c ++){
		x = 2 * 3 - 4 * 2 + c;
		printf("\n2 x 3 - 4 x 2 + %i = %i", c, x);
	}
}
