#include <iostream>

using namespace std;

main(){
	int num[20], c, v = 10, calc = 0;
	
	for(c = 0; c <= 20; c++){
		num[c] = v;
		v++;
	}
	
	for(c = 0; c <= 20; c++){
		calc = num[c] % 2;
		
		cout << num[c];
		
		if(calc == 0){
			cout << " - PAR\n";
		} else if(calc == 1){
			cout << " - IMPAR\n";
		}
	}
}
