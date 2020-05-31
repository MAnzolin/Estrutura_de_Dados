/** 
 * Escreva uma rotina que recebe uma pilha p e devolve a quantidade de elementos que estão na pilha.
 * A rotina deverá ser independente da implementação, ou seja, não 'sabemos' como ela foi implementada.
 * **/

#include <stdio.h>
#include <stdlib.h>
#include "../../pilha/pilha.h"

int main(void){
    Pilha p = pilha(1);
    int x, r = 1;
    printf("Digite os valores da pilha\n");
    while(r == 1){
        printf("Valor: ");
        scanf("%d*",&x);
        puts("Continuar? '1' para sim");
        scanf("%d",&r);
        (p -> max)++;
    }
     printf("O tamanho da pilha é de: %d \n",--(p -> max));
    return 0;
}
