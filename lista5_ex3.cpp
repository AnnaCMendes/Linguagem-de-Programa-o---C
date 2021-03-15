#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(){
	int a, b=0;
	char std[50], std1[50], enter[50];
	printf("Insira uma entrada: ");
	scanf("%49[^\n]", &enter);
	for(a=0; enter[a]!='\0'; a++){
		std[a]= enter[a];
		b++;
	}
	std[b]= '\0';
	for(a=0; a<b; a++){
			std1[b-a-1] = std[a];
	}
	std1[b]= '\0';
	printf("\nA entrada: %s\nA saida: %s\n", std, std1);
	
	if((strcmp(std, std1))==0){
		printf("\nA entrada eh palindrome");
	}
	else{
		printf("\nA entrada nao eh palindrome");
	}

	return 0;
}
