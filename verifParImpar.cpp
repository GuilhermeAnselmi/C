#include <stdio.h>

main(){
	int conta;
	
	for(int c = 0; c <= 100; c ++){
		conta = c % 2;
		
		if(conta == 0){
			printf("%i\n", c);
		}
	}
}
