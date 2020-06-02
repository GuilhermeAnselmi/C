#include <stdio.h>
#include <string.h>

typedef struct{
	char Nome[20];
	int Idade;
	float Peso;
	bool Vivo;
} pessoa;

main(){
	pessoa Num1;

	strcpy(Num1.Nome, "Guilherme");
	Num1.Idade = 21;
	Num1.Peso = 80.5;
	Num1.Vivo = true;
	
	printf("%s %i %f %i", Num1.Nome, Num1.Idade, Num1.Peso, Num1.Vivo);
}
