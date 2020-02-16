typedef struct pila
{
	char digito;
	struct pila *anterior;
}pila;

pila* ultimo = NULL;

void push (char digito)
{
	pila *elemento = (pila*)malloc(sizeof(pila));
	elemento -> digito = digito;
	if (ultimo == NULL)
	{
		ultimo = elemento;
		ultimo -> anterior = NULL;
	}
	else{
		elemento -> anterior = ultimo;
		ultimo = elemento;
	}
}

char pop ()
{
	pila* auxiliar;
	auxiliar = ultimo;
	ultimo = auxiliar -> anterior;
	return auxiliar -> digito;
}

void mostrar ()
{
	pila *auxiliar = ultimo;
	while(auxiliar != NULL)
	{
		printf("Valor: %c\n", auxiliar -> digito);
		auxiliar = auxiliar-> anterior;
	}
}