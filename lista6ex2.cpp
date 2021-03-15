#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int mat[4][4], a, b, c, d, e;
	srand((unsigned) time(NULL));
	for(a=0; a<4; a++){
		for(b=0; b<4; b++){
			mat[a][b]= rand()%20;
		}
	}
	printf("Matriz:");
	for(a=0; a<4; a++){
		printf("\n");
		for(b=0; b<4; b++){
			printf("%d ", mat[a][b]);
		}
	}
	
	printf("\n\nColoque a linha que voce quer ver ( linhas 1 a 4):\n");
	scanf("%d", &c);
	for(b=0; b<4; b++){
		printf("%d ", mat[c-1][b]);
		d += mat[c-1][b];
	}
	printf("\n\nSoma da lina: %d\n", d);
	printf("\nColoque a coluna que voce quer ver ( colunas 1 a 4):\n");
	scanf("%d", &c);
	for(a=0; a<4; a++){
		printf("%d\n", mat[a][c-1]);
		e += mat[a][c-1];
	}
	printf("Soma da coluna: %d", e);
	
	return 0;
}
