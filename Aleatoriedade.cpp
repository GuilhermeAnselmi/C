#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	srand( (unsigned)time(NULL) );
	
	printf("Tente me vencer!\n");
	
	while(true){
		int res, r = rand() % 20;
		
		printf("\nMe de sua resposta...");
  
  		printf("\nResposta: ");
  		scanf("%i", &res);
  
  		if(res == r){
  			printf("\nVoce acerdou!");
  			break;
		} else{
			printf("\nVoce errou!\nA resposta era: ");
			printf("%d\n", r);
			printf("\nTente novamente");
		}
	}
}
