#include <stdio.h>

main(){
	int nota[8], media = 0, maior = 0, menor = 0;
	
	for(int c = 0; c < 8; c++){
		printf("Nota Aluno %i: ", c + 1);
		scanf("%i", &nota[c]);
		
		media += nota[c];
	}
	
	media = media / 8;
	
	for(int c = 0; c < 8; c++){
		if(nota[c] >= media){
			maior++;
		}else{
			menor++;
		}
	}
	
	printf("%i alunos tiraram nota acima da media e %i alunos tiraram nota abaixo da media", maior, menor);
}
