#include <stdio.h>

int exercicio01(int n){
    if(n<=1)
        return 0;

    int primo = 1, meio;
    for(meio=n/2;meio>1;meio--){
        if(n%meio == 0){
            primo = 0;
            break;
        }
    }
    return primo;
}

void exercicio02(int n){
    int c, i, res;
    for(res=c=i=0;c<n;i++){
        if(exercicio01(i)){
            c++;
            res += i;
            if(c<n)
                printf("%d + ", i);
            else
                printf("%d = %d\n", i, res);
        }
    }
}

int exercicio03(int a){
    int div=0, meio=a/2, b=1;
    while(b<=meio)
        if(a%b++==0)
            div++;
    return div+1;
}

void exercicio04(){
    int a, b, c;
    printf("Digite 3 medidas de lados:\n");
    printf("1º lado: "); scanf("%d", &a);
    printf("2º lado: "); scanf("%d", &b);
    printf("3º lado: "); scanf("%d", &c);

    if(a+b>c && a+c>b && b+c>a) /*Condição de existencia de um triangulo*/
        if(a==b && b==c) /*Se todos os lados forem iguais*/
            printf("O Triângulo é Equilátero!\n");
        else if(a==b && a!=c || a==c && a!=b || b==c && b!=a) /*Se dois lados forem iguais, e um diferente*/
            printf("O Triângulo é Isósceles!\n");
        else
            printf("O Triângulo é Escaleno!\n"); /*Se todos os lados forem diferentes*/
    else
        printf("Não é um triângulo!\n"); /*Não é um triângulo*/
}

int exercicio05(int n){
    if(n==0 || n==1)
        return 1;
    else
        return n * exercicio05(n-1);
}

double exercicio06(int base, int potencia){
    if(potencia == 0)
        return 1;
    else
        return base * exercicio06(base, potencia-1);
}

/*Exercicio 07 - Inicio*/

int ler(){
    printf("Digite um numero: ");
    int a;
    scanf("%d", &a);
    return a;
}

int multiplicar(){
    int a = ler();
    int b = ler();
    int res = a*b;
    return res;
}

void imprimir(){
    printf("Resultado: %d\n", multiplicar());
}

int exercicio08(int n){//
    return n%2==0;
}
