/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h> /*biblioteca com funções de entradas e saídas*/
#include <math.h> /*biblioteca com constantes e funções matemáticas*/

int main()
{
    /*CassiaLuz*/
    int a, b;
    char op;
 
    printf("Calculadora de 4 operações\n");
    printf("Digite o operador matematico: +,-,*,/ %c",op); /*na função printf, para chamar a variavel não precisa do operador de endereço &*/
    scanf("%c",&op);
    printf("Digite o primeiro numero:\n");
    scanf("%d",&a);
    printf("Digite o segundo numero:\n");
    scanf("%d",&b);
    
    switch(op){
        case '+': /*usar aspas simples no comando switch*/
            printf("Resultado da soma %d:", a+b);
            break;
        case '-':
            printf("Resultado da soma %d:", a-b);
            break;
        case '*':
            printf("Resultado da soma %d:", a*b);
            break;
        case '/':
            printf("Resultado da soma %d:", a/b);
            break;
        default:
            printf("Operacao Invalida");
        
    }
    
}
