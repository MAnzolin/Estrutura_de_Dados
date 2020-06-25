#include <stdio.h>
#include <stdlib.h>
#include "arvore_silvio.h"

int main(void) {
   Arv I = arv(arv(arv(NULL,4,NULL),2,arv(NULL,5,NULL)),1,arv(NULL,3,NULL));
   exibe(I,0);
   return 0;
}
