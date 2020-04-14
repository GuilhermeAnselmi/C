#include <stdio.h>

main(){
	int calc;
	
	printf("Tabuada > ");
	scanf("%i", &calc);
	
	for(int c = 0; c <= 10; c ++){
		printf("%i x %i = %i\n", calc, c, c * calc);
	}
}
