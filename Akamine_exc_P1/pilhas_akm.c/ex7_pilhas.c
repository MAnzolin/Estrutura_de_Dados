/** 
 * Escreva uma rotina para converter um número decimal em binário.
 * A rotina deverá receber um número inteiro n (n>=0) e imprimir seu binário.
 * 
 * OBS: coloquei a estrutura de pilha aqui, pois preciso que o valor da pilha seja CHAR e não INT.
 * 
 * **/

#include <stdio.h>
#include <stdlib.h>

typedef char Itemp;

typedef struct pilha {
   int    max;
   int    topo;
   Itemp *item;
} *Pilha;

Pilha pilha(int m) {
   Pilha P = malloc(sizeof(struct pilha));
   P->max  = m;
   P->topo = -1;
   P->item = malloc(m*sizeof(Itemp));
   return P;
}

int vaziap(Pilha P) {
   if( P->topo == -1 ) return 1;
   else return 0;
}

int cheiap(Pilha P) {
   if( P->topo == P->max-1 ) return 1;
   else return 0;
}

void empilha(Itemp x, Pilha P) {
   if( cheiap(P) ) { puts("pilha cheia!"); abort(); }
   P->topo++;
   P->item[P->topo] = x;
}

Itemp desempilha(Pilha P) {
   if( vaziap(P) ) { puts("pilha vazia!"); abort(); }
   Itemp x = P->item[P->topo];
   P->topo--;
   return x; 
}


//--------------------------------------

void converta(char str[50]){
    Pilha p;
    char valores[50];
    int count = 0;
    for(int i = 0; str[i]; i++){
      if(!(str[i] == '(' || str[i] == ' ')){
        if( str[i] == ')') {valores[count] = desempilha(p); count++;}
        else if( str[i] == '+' || str[i] == '-'|| str[i] == '*' || str[i] == '/')empilha(str[i], p);
        else {
            valores[count] = str[i];
            count++;}
      }
    }
    puts("Nova exp:");
    for(int j = 0;j <= count; j++){
       printf("%c",valores[j]);}
   return;
}

int main(void){
    char str[50];
    printf("Digite a sua expressao:\n");
    gets(str);
    converta(str);
    return 0;
}