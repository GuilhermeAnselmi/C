#include <stdio.h>

main(){
	int num, cont = 0, mult = 0;
	
	printf("Tabuada de > ");
	scanf("%i", &num);
	
	while(cont < 10){
		cont += 1;
		
		printf("%i x %i = %i\n", num, cont, num * cont);
	}
}
