#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct arv {
   struct arv *esq;
   Item item;
   struct arv *dir;
} *Arv;

Arv arv(Arv e, Item x, Arv d) {
   Arv n = malloc(sizeof(struct arv));
   n->esq  = e;
   n->item = x;
   n->dir  = d;
   return n;
}

void ins(Item x, Arv *A) {
     if( *A == NULL ) *A = arv(NULL,x,NULL);
     else if( x <= (*A)->item ) ins(x,&(*A)->esq);
     else ins(x,&(*A)->dir);
}

void exibe(Arv A,int n) {
   if( A==NULL ) return;
   exibe(A->dir,n+1);
   printf("%*s%d\n",3*n,"",A->item);
   exibe(A->esq,n+1);
}

Arv completa(int h) {
   if( h==0 ) return NULL;
   return arv(completa(h-1), rand()%100, completa(h-1));
}

/* EX. 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

...

Arv completa(int h) {
   if( h==0 ) return NULL;
   return arv(completa(h-1), rand()%100, completa(h-1));
}

int main(void) {
   srand(time(NULL));
   Arv A = completa(3);
   exibe(A,0);
   return 0;
}
*/

/* EX. 4

int main(void) {
   srand(time(NULL));
   exibe(balanceada(9),0);
   return 0;
}
*/

/* EX. 5

int main(void) {
   srand(time(NULL));
   exibe(aleatoria(9),0);
   return 0;
}
*//* EX. 1

#include <stdio.h>
#include <stdlib.h>

typedef int Item;

typedef struct arv {
   struct arv *esq;
   Item item;
   struct arv *dir;
} *Arv;

Arv arv(Arv e, Item x, Arv d) {
   Arv n = malloc(sizeof(struct arv));
   n->esq  = e;
   n->item = x;
   n->dir  = d;
   return n;
}

void exibe(Arv A,int n) {
   if( A==NULL ) return;
   exibe(A->dir,n+1);
   printf("%*s%d\n",3*n,"",A->item);
   exibe(A->esq,n+1);
}

int main(void) {
   Arv I = arv(arv(NULL,2,NULL),1,arv(NULL,3,arv(NULL,4,NULL)));
   exibe(I,0);
   return 0;
}
*/

/* EX. 3

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

...

Arv completa(int h) {
   if( h==0 ) return NULL;
   return arv(completa(h-1), rand()%100, completa(h-1));
}

int main(void) {
   srand(time(NULL));
   Arv A = completa(3);
   exibe(A,0);
   return 0;
}
*/

/* EX. 4

int main(void) {
   srand(time(NULL));
   exibe(balanceada(9),0);
   return 0;
}
*/

/* EX. 5

int main(void) {
   srand(time(NULL));
   exibe(aleatoria(9),0);
   return 0;
}
*/