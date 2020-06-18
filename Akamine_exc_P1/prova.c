#include <stdio.h>
#include <stdlib.h>

typedef char obj;
#define max 20
typedef struct{
	int topo;
	obj s[max];
}Pilha;

void init(Pilha *p);
int isempty(Pilha *p);
int isfull(Pilha *p);
void push(obj x, Pilha *p);
obj pop(Pilha *p);
obj top(Pilha *p);

#include <stdio.h>
#include <stdlib.h>

int main(void){
	Pilha p1;
	Pilha *p=&p1;
	char letra;
	init(p);
	printf("vamos testar pilha:\n");
	do{
		printf("letra <sair: . >: ");
		letra = getchar(); fflush(stdin);
		if(letra!= '.') push(letra, p);
	}
	while(letra!='.');
	while(!isempty(p)) printf("%c\n", pop(p));
	return 0;
}

void init(Pilha *p){
	p->topo=-1;
}
int isempty(Pilha *p){
	return p->topo ==-1;}
int isfull(Pilha *p){
	return p->topo==max-1;}
	void push(obj x, Pilha *p){
	if (isfull(p)){printf("!!! stack over flow"); exit(1);}
			else p->s[++p->topo]=x;}
	obj pop(Pilha *p){
		if(isempty(p)){printf("!!! stack over flow"); exit(1);}
		else{
			obj x=p->s[p->topo--];
	return x;}
	}
	obj top(Pilha *p){
		if(isempty(p)) printf(" !!! stack underflow");
		else
			return p->s[p->topo];
		}

____ palindromo(____ s[]) { 
    Pilha p1;
    Pilha *p;
    int i;
    p = &p1; init(____);
    for( i=0; s[____] != '____'; i++ ) push(s[i], ____);
    i = ____;
    while( ! ________(p) ) {
        if( pop(p) ____ s[i] ) return ____;
        i++; 
    } 
    return 1;
}

