#include <stdio.h>
#include <conio.h>
#include <locale.h>

void exercicio1();
void exercicio2();
void exercicio3();
void exercicio4();
void exercicio5();
void exercicio6();
void exercicio7();
void exercicio8();
void exercicio9();
void exercicio10();
void exercicio11();
void exercicio12();
void exercicio13();

int main(){

    setlocale(LC_ALL, "");
    exercicio1();
    exercicio2();
    exercicio3();
    exercicio4();
    exercicio5();
    exercicio6();
    exercicio7();
    exercicio8();
    exercicio9();
    exercicio10();
    exercicio11();
    exercicio12();
    exercicio13();
    return 0;
}

void exercicio1(){
    printf("%s\n\n", "1. Dado dois n�mero inteiro positivo n, calcular e imprimir a sua soma.");
    int a, b;
    printf("Digite os n�meros 1 e 2: ");
    scanf("%d %d", &a, &b);
    printf("Resposta: %d\n", a+b);

    system("pause");
    system("cls");
}

void exercicio2(){
    printf("%s\n\n", "2. Fa�a um programa que solicite um n�mero (inteiro/positivo) e imprima-o.");
    int a;
    printf("Insira um inteiro positivo: ");
    scanf("%u",&a);
    printf("Resposta: %d\n", a);

    system("pause");
    system("cls");
}

void exercicio3(){
    printf("%s\n\n", "3. Dado um n�mero positivo n, imprimir seu quadrado.");
    int a;
    printf("Insira um inteiro positivo: ");
    scanf("%d", &a);
    printf("Resposta: %d\n", a*a);

    system("pause");
    system("cls");
}

void exercicio4(){
    printf("%s\n\n", "4. Fa�a um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.");
    int ano;
    printf("Insira o ano em que voc� nasceu: ");
    scanf("%d", &ano);
    printf("Resposta: %d\n", 2016-ano);

    system("pause");
    system("cls");
}

void exercicio5(){
    printf("%s\n\n", "5. Dado um n�mero inteiro positivo n verificar se � par ou �mpar.\n"
    "Apresente uma mensagem na tela informando o n�mero e o resultado.\n"
    "OBS:% utilizado para calcular o resto.");
    int a;
    printf("Insira um n�mero: ");
    scanf("%d", &a);
    if(a%2==0)
        printf("Resposta: %d � par\n", a);
    else
        printf("Resposta: %d � impar\n", a);

    system("pause");
    system("cls");
}

void exercicio6(){
int a, b, c;
printf("%s\n\n", "6. Dados tr�s n�meros, imprimi-los em ordem crescente. \n");
printf("Digite Tr�s n�meros: ");
scanf("%d %d %d", &a, &b, &c);
    if (a<b&&b<c)
    {
        printf("A ordem crescente �: %2.d %2.d %2.d ", a, b, c);
    }
    else if (a<c&&c<b)
    {
        printf("A ordem crescente �: %2.d %2.d %2.d ", a, c, b);
    }
    else if (b<a&&a<c)
    {
        printf("A ordem crescente �: %2.d %2.d %2.d ", b, a, c);
    }
    else if (b<c&&c<a)
    {
        printf("A ordem crescente �: %2.d %2.d %2.d ", b, c, a);
    }
    else if (c<a&&a<b)
    {
        printf("A ordem crescente �: %2.d %2.d %2.d ", c, a, b);
    }
    else
    {
        printf("A ordem crescente �: %2.d %2.d %2.d ", c, b, a);
    }

    system("pause");
    system("cls");

}


void exercicio7(){
    printf("%s\n\n", "7. Calcular o fatorial de um n�mero fornecido pelo usu�rio.\n"
    "A fun��o fatorial de um n�mero natural n � o produto de todos os n primeiros n�meros naturais."
    "Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.");
    int n, i, fat=1;
    printf("Digite um n�mero: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        fat = fat * i;
    }
    printf("Resposta: %d\n", fat);

    system("pause");
    system("cls");
}

void exercicio8(){
    printf("%s\n\n", "8. Calcular a tabuada de um n�mero fornecido pelo usu�rio multiplicado de 0 a 12.\n");
    int n, i;
    printf("Entre com um valor: ");
    scanf("%d", &n);
    for(i=0;i<=12;i++){
        printf("%d x %d\n", n, i);
    }

    system("pause");
    system("cls");
}

void exercicio9(){
    printf("%s\n\n", "Crie um programa por meio do qual o usu�rio ir� digitar a opera��o desejada e dois valores,"
           " ao final dever� ser exibido o resultado da opera��o. "
           " Op��es dispon�veis: 1 � Divis�o; 2 � resto da divis�o; 3 � adi��o; 4 � multiplica��o."
           " Obs: Utilizar:  do-while (para o menu) e o comando switch.");

    while(1){
        int opcao, a, b;
    printf("Entre com a op��o desejada: ");

    printf("'\n\t(1)...%s\n\t(2)...%s\n\t(3)...%s\n\t(4)...%s\n\t(Outros)...%s\n", "Divis�o", "Resto da Divis�o", "Adi��o", "Multiplica��o", "Sair");
    scanf("%d", &opcao);
    if(opcao < 1 || opcao > 4){
        system("pause");
        system("cls");
        break;
    }
    printf("Entre com primeiro n�mero: ");
    scanf("%d", &a);
    printf("Entre com primeiro n�mero: ");
    scanf("%d", &b);

    switch(opcao){
        case 1:
            printf("Resultado: %f\n", a/(float)b);
            break;
        case 2:
            printf("Resultado: %d\n", a%b);
            break;
        case 3:
            printf("Resultado: %d\n", a+b);
            break;
        case 4:
            printf("Resultado: %d\n", a*b);
            break;
        default:
            printf("Op��o inv�lida.\n");
    }//fim switch

    system("cls");
    }//fim do while
}

void exercicio10(){
    printf("%s\n\n", "10-  Dada uma sequ�ncia de n�meros inteiros n�o-nulos, come�ando por 1,imprimir seus quadrados.");
    int n=1;
    printf("Entre com uma sequencia de n�mero n�o-nulos, seguida por 0.\n");

    scanf("%d", &n);
    do{
        printf("O quadrado do n�mero %d � %d\n", n, n*n);
        scanf("%d", &n);
    } while(n!=0);
    system("pause");
    system("cls");
}

void exercicio11(){
    printf("%s\n\n", "11. Dado um n�mero inteiro positivo n, calcular a soma dos n primeiros n�meros naturais.");
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("A soma dos %d primeiros n�meros naturais �: %d\n", n, (n*(n+1))/2);
    system("pause");
    system("cls");
}

void exercicio12(){
    printf("%s\n\n", "12. Dado um n�mero inteiro positivo n, imprimir os n primeiros naturais �mpares.");
    int n, i, c;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    for(i=1,c=0;c<n;c++,i+=2){
        printf("%d\n", i);
    }
    system("pause");
    system("cls");
}

void exercicio13(){
    printf("%s\n\n", "13. Dados um inteiro x e um inteiro n�o-negativo n, calcular x n.");
    int base, i, potencia, res;
    printf("Digite um n�mero inteiro: ");
    scanf("%d", &base);
    printf("Digite um n�mero inteiro n�o-negativo: ");
    scanf("%d", &potencia);
    for(res=i=1;i<=potencia;i++){
        res = res * base;
    }
    printf("O valor de %d elevado a %d: %d\n", base, potencia, res);

    system("pause");
    system("cls");
}
