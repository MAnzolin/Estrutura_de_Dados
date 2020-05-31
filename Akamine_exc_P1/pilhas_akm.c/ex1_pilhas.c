/** 
 * Escreva uma rotina para converter um número decimal em binário.
 * A rotina deverá receber um número inteiro n (n>=0) e imprimir seu binário.
 * **/

#include <stdio.h>
#include <stdlib.h>
#include "../../pilha/pilha.h"

void converta(int b){
    Pilha A = pilha(100);
    while( (b/2) >= 1 && !cheiap(A)){
       empilha((b%2), A);
       b = b/2;
    }
    empilha(1,A);
    printf("Binario: ");
    while(!vaziap(A)){
       printf("%d", desempilha(A));
    }
    puts("");
    return;
}

int main(void){
    int x;
    printf("Digite um numero decimal positivo:\n");
    scanf("%d", &x);
    if(x != 0 )converta(x);
    else printf("Binario: 0\n");
    
    return 0;
}