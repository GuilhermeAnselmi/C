#include <stdio.h>

main(){
	int nota[8], media = 0, maior = 0;
	char aluno[8][50];
	
	for(int c = 0; c < 8; c++){
		printf("\nNome %i: ", c + 1);
		scanf("%s", &aluno[c]);
		
		printf("Nota %i: ", c + 1);
		scanf("%i", &nota[c]);
		
		media += nota[c];
	}
	
	media = media / 8;
	printf("\nA media e %i", media);
	printf("\nOs alunos que tiraram a nota acima da media foram...");
	
	for(int c = 0; c < 8; c++){
		if(nota[c] >= media){
			printf("\n%s", aluno[c]);
		}
	}
}
