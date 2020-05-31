/**
 * Crie um programa que usa duas pilhas A e B para ordenar uma sequencia de n
 * números reais dados pelo usuário. A ideia é organizar a pilha A de modo que
 * nenhum item seja empilhado sobre outro menor (use a pilha B apenas como espaço
 * de manobra), depois descarregue e exiba os itens da pilha A.
 */

#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int balanceada(char *exp){
  Pilha p = pilha(strlen(exp));
  for (int i = 0; exp[i]; i++) {
    char l = exp[i];
    if ( strchr("({[", l))
      empilha(l, p);
    else if (vaziap(p)) {
      destroip(&p);
      return 0;
    }
    else if ( l == ')' && topo(p) == '(') desempilha(p);
    else if ( l == '}' && topo(p) == '{') desempilha(p);
    else if ( l == ']' && topo(p) == '[') desempilha(p);
    else break;
  }
  int x = vaziap(p);
  destroip(&p);
  return x;
}


int main(void){
  char exp[256];
  printf("Informe a expressao:");
  gets(exp);
  int b = balanceada(exp);
  printf("%s\n", b?"A expressao esta balanceada":"A expressao nao esta balanceada");
  system("pause");
  return 0;
}
