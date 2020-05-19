#include <stdio.h>

main(){
	int m[2][2], n[2][2], prod[2][2], calc[2][2], dif[2][2];
	int c, d, resm, resn, mult, soma, sub;
	
	for(c = 0; c < 2; c++){
		for(d = 0; d < 2; d++){
			printf("\nColoque o valor de M[%i][%i] > ", c, d);
			scanf("%i", &resm);
			m[c][d] = resm;
			
			printf("\nColoque o valor de N[%i][%i]> ", c, d);
			scanf("%i", &resn);
			n[c][d] = resn;
		}
	}
	
	for(c = 0; c < 2; c++){
		for(d = 0; d < 2; d++){
			mult = m[c][d] * n[c][d];
			prod[c][d] = mult;
			
			soma = m[c][d] + n[c][d];
			calc[c][d] = soma;
			
			sub = m[c][d] - n[c][d];
			dif[c][d] = sub;
		}
	}
	
	for(c = 0; c < 2; c++){
		for(d = 0; d < 2; d++){
			printf("\nPosicao[%i][%i]:", c, d);
			
			printf("\nMultiplicao = %i", prod[c][d]);
			
			printf("\nSoma = %i", calc[c][d]);
			
			printf("\nDiferenca = %i", dif[c][d]);
			
			printf("\n");
		}
	}

}

