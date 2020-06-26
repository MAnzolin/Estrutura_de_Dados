#include <stdio.h>
#include <stdlib.h>
#include "arvore_silvio.h"

int pot(int b, int n) { int a; 
if( n==0 ) return 1;
 if( n==1 ) return b; a = pot(b, n/2); 
if( n%2==0 ) return a*a; // há uma multiplicação. 
return a*a*b; // há duas multiplicações.
 }