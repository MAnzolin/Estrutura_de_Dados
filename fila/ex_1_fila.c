
#include <stdlib.h>
#include "fila.h"
#include <stdlib.h>

#define tempo 3
int main(void) {
    Fila F = fila(5);
    enfileira(17,F);
    enfileira(25,F);
    enfileira(39,F);
    enfileira(46,F);
    //17 - 25 - 39 - 46
    while(!vaziaf(F)){
        int x = desenfileira(F);
        int p = x/10;
        int t = x%10;
        if(t > 3) enfileira(p*10+ (t-tempo),F);
        else printf("Processo %d concluido\n", p);
       
        //25 - 39 - 46
        //x = 17
        //p = 17/10 = 1
        //t = 17%10 = 7
       
        //39 - 46
        //x = 25
        //p = 25/10 = 2
        //t = 17%10 = 1
       
        //46
        //x = 39
        //p = 39/10 = 3
        //t = 39%10 = 9
       
        //vazia
        //x = 46
        //p = 46/10 = 4
        //t = 46%10 = 6
    }
    destroif(&F);
   return 0;
}