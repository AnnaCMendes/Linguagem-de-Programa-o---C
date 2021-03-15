#include <stdio.h>
#include <conio.h>
#include <string.h>

int main(){
	int a, b, c;
	char std[30];
	printf("Insira uma palavra: ");
	fgets(std, 30, stdin);
	b = strlen(std);
	c = (b + 1);
	for(a=0; a<c; a++){
		printf("%c", std[b]);
		b--;
	}
	return 0;
}
