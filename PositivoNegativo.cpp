#include <stdio.h>

main(){
	int v[6], p = 0, n = 0;
	
	for(int c = 0; c < 6; c++){
		printf("Valor: ");
		scanf("%i", &v[c]);

		if(v[c] >= 0){
			p++;
		} else{
			n++;
		}
	}
	
	printf("Existem %i numeros positivos e %i numeros negativos", p, n);
}
