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
    printf("%s\n\n", "1. Dado dois número inteiro positivo n, calcular e imprimir a sua soma.");
    int a, b;
    printf("Digite os números 1 e 2: ");
    scanf("%d %d", &a, &b);
    printf("Resposta: %d\n", a+b);

    system("pause");
    system("cls");
}

void exercicio2(){
    printf("%s\n\n", "2. Faça um programa que solicite um número (inteiro/positivo) e imprima-o.");
    int a;
    printf("Insira um inteiro positivo: ");
    scanf("%u",&a);
    printf("Resposta: %d\n", a);

    system("pause");
    system("cls");
}

void exercicio3(){
    printf("%s\n\n", "3. Dado um número positivo n, imprimir seu quadrado.");
    int a;
    printf("Insira um inteiro positivo: ");
    scanf("%d", &a);
    printf("Resposta: %d\n", a*a);

    system("pause");
    system("cls");
}

void exercicio4(){
    printf("%s\n\n", "4. Faça um programa que solicite o ano em que uma pessoa nasceu e retorne sua idade.");
    int ano;
    printf("Insira o ano em que você nasceu: ");
    scanf("%d", &ano);
    printf("Resposta: %d\n", 2016-ano);

    system("pause");
    system("cls");
}

void exercicio5(){
    printf("%s\n\n", "5. Dado um número inteiro positivo n verificar se é par ou ímpar.\n"
    "Apresente uma mensagem na tela informando o número e o resultado.\n"
    "OBS:% utilizado para calcular o resto.");
    int a;
    printf("Insira um número: ");
    scanf("%d", &a);
    if(a%2==0)
        printf("Resposta: %d é par\n", a);
    else
        printf("Resposta: %d é impar\n", a);

    system("pause");
    system("cls");
}

void exercicio6(){
int a, b, c;
printf("%s\n\n", "6. Dados três números, imprimi-los em ordem crescente. \n");
printf("Digite Três números: ");
scanf("%d %d %d", &a, &b, &c);
    if (a<b&&b<c)
    {
        printf("A ordem crescente é: %2.d %2.d %2.d ", a, b, c);
    }
    else if (a<c&&c<b)
    {
        printf("A ordem crescente é: %2.d %2.d %2.d ", a, c, b);
    }
    else if (b<a&&a<c)
    {
        printf("A ordem crescente é: %2.d %2.d %2.d ", b, a, c);
    }
    else if (b<c&&c<a)
    {
        printf("A ordem crescente é: %2.d %2.d %2.d ", b, c, a);
    }
    else if (c<a&&a<b)
    {
        printf("A ordem crescente é: %2.d %2.d %2.d ", c, a, b);
    }
    else
    {
        printf("A ordem crescente é: %2.d %2.d %2.d ", c, b, a);
    }

    system("pause");
    system("cls");

}


void exercicio7(){
    printf("%s\n\n", "7. Calcular o fatorial de um número fornecido pelo usuário.\n"
    "A função fatorial de um número natural n é o produto de todos os n primeiros números naturais."
    "Fat(n)=n!=1.2.3.4...n. Vamos tomar Fat(0)=1.");
    int n, i, fat=1;
    printf("Digite um número: ");
    scanf("%d", &n);
    for(i=1;i<=n;i++){
        fat = fat * i;
    }
    printf("Resposta: %d\n", fat);

    system("pause");
    system("cls");
}

void exercicio8(){
    printf("%s\n\n", "8. Calcular a tabuada de um número fornecido pelo usuário multiplicado de 0 a 12.\n");
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
    printf("%s\n\n", "Crie um programa por meio do qual o usuário irá digitar a operação desejada e dois valores,"
           " ao final deverá ser exibido o resultado da operação. "
           " Opções disponíveis: 1 – Divisão; 2 – resto da divisão; 3 – adição; 4 – multiplicação."
           " Obs: Utilizar:  do-while (para o menu) e o comando switch.");

    while(1){
        int opcao, a, b;
    printf("Entre com a opção desejada: ");

    printf("'\n\t(1)...%s\n\t(2)...%s\n\t(3)...%s\n\t(4)...%s\n\t(Outros)...%s\n", "Divisão", "Resto da Divisão", "Adição", "Multiplicação", "Sair");
    scanf("%d", &opcao);
    if(opcao < 1 || opcao > 4){
        system("pause");
        system("cls");
        break;
    }
    printf("Entre com primeiro número: ");
    scanf("%d", &a);
    printf("Entre com primeiro número: ");
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
            printf("Opção inválida.\n");
    }//fim switch

    system("cls");
    }//fim do while
}

void exercicio10(){
    printf("%s\n\n", "10-  Dada uma sequência de números inteiros não-nulos, começando por 1,imprimir seus quadrados.");
    int n=1;
    printf("Entre com uma sequencia de número não-nulos, seguida por 0.\n");

    scanf("%d", &n);
    do{
        printf("O quadrado do número %d é %d\n", n, n*n);
        scanf("%d", &n);
    } while(n!=0);
    system("pause");
    system("cls");
}

void exercicio11(){
    printf("%s\n\n", "11. Dado um número inteiro positivo n, calcular a soma dos n primeiros números naturais.");
    int n;
    printf("Digite o valor de n: ");
    scanf("%d", &n);
    printf("A soma dos %d primeiros números naturais é: %d\n", n, (n*(n+1))/2);
    system("pause");
    system("cls");
}

void exercicio12(){
    printf("%s\n\n", "12. Dado um número inteiro positivo n, imprimir os n primeiros naturais ímpares.");
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
    printf("%s\n\n", "13. Dados um inteiro x e um inteiro não-negativo n, calcular x n.");
    int base, i, potencia, res;
    printf("Digite um número inteiro: ");
    scanf("%d", &base);
    printf("Digite um número inteiro não-negativo: ");
    scanf("%d", &potencia);
    for(res=i=1;i<=potencia;i++){
        res = res * base;
    }
    printf("O valor de %d elevado a %d: %d\n", base, potencia, res);

    system("pause");
    system("cls");
}
