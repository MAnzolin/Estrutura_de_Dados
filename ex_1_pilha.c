#include <stdio.h>
#include <stdlib.h>
#include "est-pilha.h"

int main(void) {
  //cria uma var do tipo char de tamanho 81
  //cria uma pilha P com o tamanho máximo de 81
  
   char  c[81];
   Pilha P = pilha(81);
   printf("Cadeia? ");
   gets(c);
   for(int i=0; c[i]; i++)
      empilha(c[i],P);
   printf("Inverso: ");
   while( !vaziap(P) )
      printf("%c", desempilha(P));
   destroip(&P);
   return 0;
}
