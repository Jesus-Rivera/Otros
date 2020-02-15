#include <stdio.h>
#include <stdlib.h>


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

int main(int argc, char const *argv[])
{
	printf("Hola mundo\n");
	push('H');
	push('O');
	push('L');
	push('A');
	push(' ');
	push('M');
	push('U');
	push('N');
	push('D');
	push('O');
	mostrar();
	printf("Este elemento salio de la pila %c\n",pop());
	printf("La nueva pila es: \n");
	mostrar();
	return 0;
}



