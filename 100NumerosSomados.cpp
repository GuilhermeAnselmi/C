#include <stdio.h>

main(){
	int c, soma = 0;
	for(c = 0; c < 100; c ++){
		soma += c;
		printf("%i\n", soma);
	}
}
