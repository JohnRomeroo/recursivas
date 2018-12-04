#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Faça uma função recursiva que receba um número inteiro positivo N e imprima todos os números naturais de 0 até N em ordem crescente */

int crescente(int n, int k)
{
    printf("%d\n", k);
    if (n > k)
        return crescente(n, k + 1);
    else
        return 0;
}

/* Faça uma função recursiva que calcule e retorne o fatorial de um número inteiro N. */

int fatorial(int n)
{
    if(n==0)
        return 1;
    else
        return n * fatorial(n-1);
}

/* Faça uma função recursiva que calcule e retorne o enésimo termo da sequência de Fibonacci. */

int fibonacci(int n)
{
    if (n==0)
        return 0;
    else if (n==1 || n==2)
        return 1;
    else
        return fibonacci(n-1) + fibonacci(n - 2);

}

/* Crie um programa em C, que contenha uma função recursiva que receba dois inteiros positivos (k e n) e calcule kn.
Utilize apenas multiplicações. O programa principal deve solicitar ao usuário os valores de k e n e imprimir o resultado
da chamada da função. */

int potencia(int k, int n)
{
   if(n==0)
    return 1;
   if(n==1)
    return k;
   else
    return k * potencia(k, n - 1);
}

/* A multiplicação de dois números inteiros pode ser feita através de somas sucessivas. Proponha um algoritmo recursivo
Multip_Rec(n1,n2) que calcule a multiplicação de dois inteiros */

int multipRec(int n1, int n2)
{
    if (n1 == 0 || n2 == 0)
        return 0;
    if (n2 == 1)
        return n1;
    else
        return n1 + multipRec(n1, n2 - 1);
}

/* Escreva uma função recursiva que calcule a soma dos primeiros n cubos:
S(n) = 1^3 + 2^3 + ... + n^3 */

int soma_cubo(int n)
{
    if(n==0)
        return 0;
    if(n==1)
        return 1;
    else
        return n * n * n + soma_cubo(n-1);
}

/* Crie uma função recursiva que receba um número inteiro positivo N e calcule o somatório dos números de 1 a N. */
int soma(int n)
{
    if(n==0)
        return 0;
    else if(n==1)
        return 1;
    else
        return n + soma(n-1);
}
