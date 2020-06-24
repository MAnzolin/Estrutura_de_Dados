#include <stdio.h>
#include <stdlib.h>
#include "arvore_silvio.h"

int main(void) {
   Arv I = NULL;
   ins(7,&I);
   ins(4,&I);
   ins(6,&I);
   ins(8,&I);
   ins(2,&I);
   ins(5,&I);
   ins(3,&I);
   ins(1,&I);
   exibe(I,0);
   return 0;
}