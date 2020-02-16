#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "pila.h"

char agrupacion_entrada[3] = {'(','{','['};
char agrupacion_salida[3] = {')','}',']'};
char operadores[5] = {'+','-','*','/','^'};

int size(char* cadena)
{
	int i = 0;
	while(cadena[i] != '\0')
		i++;
	return i;
}

bool in(char caracter, char* cadena)
{
	int i, tam = size(cadena); 
	for(i = 0; i < tam; i ++)
		if(caracter == cadena[i])
			return true;
	return false;
}

char* infija_to_postfija(char* infija, int tam)
{
	char* postfia = (char*)malloc(sizeof(char)*(tam + 1));
	int i,j = 0;
	char aux, elemento;
	for (i = 0; i < tam; i++)
	{
		aux = infija[i];
		if(aux == '(' ||  aux == '[' ||  aux == '{')
		{
			push(aux);
		}
		else if(aux == ')' || aux == ']' || aux == '}')
		{
			elemento = ultimo -> digito;
			while(elemento != '(' ||  elemento == '[' ||  elemento == '{')
			{
				postfia[j] = pop();
				j ++;
				elemento = ultimo -> digito;
			}
			elemento = pop();
		}
		else if(in(aux,operadores))
		{
			push(aux);
		}
		else
		{
			postfia[j] = infija[i];
			j++;
		}
	}
	while(ultimo != NULL)
	{
		postfia[j] = pop();
		j++;
	}
	return postfia;
}

int main(int argc, char const *argv[])
{
	char *infija = (char*)malloc(sizeof(char)*100);
	scanf("%[^\n]",infija);
	int tam = size(infija);
	printf("La cadena en postfija es: %s\n",infija_to_postfija(infija,tam));
	return 0;
}