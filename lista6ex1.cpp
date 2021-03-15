#include <stdio.h>

int main(){
	int matriz[5][5], a, b;
	for(a=0; a<5; a++){
		for(b=0; b<5; b++){
			if (a == b)
				matriz[a][b] = 1;
			else
				matriz[a][b] = 0;
		}
	}
	for(a=0; a<5; a++){
		printf("\n");
		for(b=0; b<5; b++){
			printf("%d", matriz[a][b]);
		}
	}
	return 0;
}
