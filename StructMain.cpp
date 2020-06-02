#include <stdio.h>
#include <string.h>

main(){
	struct produto{
		char Nome[20];
		int Cod;
		int Quant;
		float Peso;
		bool EmEstoque;
	};

	
	produto prod;
	
	strcpy(prod.Nome, "Guilherme");
	prod.Cod = 1;
	prod.Quant = 5;
	prod.Peso = 10.4;
	prod.EmEstoque = true;
	
	printf("%s %i %i %f %i", prod.Nome, prod.Cod, prod.Quant, prod.Peso, prod.EmEstoque);
}
