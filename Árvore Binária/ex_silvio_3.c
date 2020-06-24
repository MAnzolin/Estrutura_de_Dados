#include <stdio.h>
#include <stdlib.h>
#include "arvore_silvio.h"

int main(void) {
   Arv I = NULL;
   Item x;
   puts("\nPara sair, digite um inteiro negativo!\n");
   while( 1 ) {
      printf("Item a ser inserido? ");
      scanf("%d",&x);
      if( x<0 ) break;
      ins(x,&I);
   }
   exibe(I,0);
   return 0;
}
