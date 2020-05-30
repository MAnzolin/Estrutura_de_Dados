int main (void)
{
  Pilha A = pilha (10);
  Pilha B = pilha (10);
  int x, i = 0;

  printf("Digite um numero e tecle 'enter'\nDigite '0' para terminar,vc pode inserir ate 10 numeros\n");
  for (int j = 0; j < 10; j++) {
      printf ("Numero: ");
      scanf ("%d", &x);
      empilha (x, A);
    }
    printf("\n----------------------------------------------------\n\n");
  
  while ( (A->item[(A->topo) - i]) ){
      if ((A->item[A->topo]) > (A->item[(A->topo) - 1]))
	{
	  printf ("Compara %d e %d e depois empilha em B ",(A->item[A->topo]),(A->item[(A->topo) - 1]));
	  printf ("e depois empilha %d em B \n",(A->item[A->topo]));
	  empilha (desempilha (A), B);
	}
      else{
	  i++;
	  printf ("Incrementou i\n");
	  }
    }
  while (!vaziap (B)){
      printf ("Pilha B: %d \n", desempilha (B));
    }

  return 0;
}
