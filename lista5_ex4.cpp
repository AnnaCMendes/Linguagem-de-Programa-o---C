#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>

int main(){
	char name[100], name1[100], name2[100], c;
	int a, b=0, d=0, e=0;
	printf("Entre com seu nome completo: ");
	gets(name1);
	printf("Insira um caracter para ser substituido: ");
	scanf("%s", &c);
	printf("\n Seu nome eh %s\n", name1);
	for(a=0; a<(strlen(name1)); a++){
		name[a]= tolower(name1[a]);
	}
	int j= strlen(name1);
	name[j]= '\0';
	for (a=0; a<j; a++){
		if((name[a]== 'a')||(name[a]=='e')||(name[a]=='i')||(name[a]=='o')||(name[a]=='u')){
			d++;
		}
		else if(name[a] == ' '){
			b++;
		}
		else{
			e++;
		}
	}
	printf("\na-) Esse nome tem %d caracteres\n", (strlen(name))-b);
	printf("\nb-) O numero de vogais eh %d, de consoantes eh %d e de spaces %d\n", d, e, b);
	int y=0;
	for (a=0; a<j; a++){
		if(strchr("aeiou ", name[a])){
			y++;
		}
		else{
			name2[a-y]= name[a];
		}
	}
	printf("\nc-) Seu nome sem vogais e spaces: ");
	for (a=0; a<(j-y); a++){
		printf("%c", name2[a]);
	}
	for (a=0; a<j; a++){
		if(c == name[a]){
			name[a]= '*';
		}
	}
	printf("\n\nd-) A palavra com os caracteres trocados eh: %s", name);
	return 0;
}
