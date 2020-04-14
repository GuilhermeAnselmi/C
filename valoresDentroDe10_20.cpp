#include <stdio.h>

main(){
	int c, n, df = 0;
	
	for(c = 0; c < 10; c ++){
		printf("Valor %i > ", c);
		scanf("%i", &n);
		
		if(n >= 10 && n <=20){
			df ++;
		}
	}
	
	printf("\nDentro %i", df);
	printf("\nFora %i", 10 - df);
}
