/*P1.c
Nome: Cibelly Cristina Rodrigues Couto
Numero Matricula: 11811ETE010

*/

#include <stdio.h>

int main ()
{
	int estado = 0,i;
	char bits[256];
	
	printf ("Digite um numero: ");
	scanf ("%s",&bits);
	for (i=0; bits[i]!='\0';i++)
	{
		if (estado == 0 && bits[i] == '0')
			;
		else if (estado == 0 && bits[i] == '1')
			estado = 1;
		else if (estado == 1 && bits[i] == '0')
			estado = 2;
		else if (estado == 1 && bits[i] == '1')
			estado = 0;
		else if (estado == 2 && bits[i] == '0')
			estado = 1;
		else if (estado == 2 && bits [i] == '1')
			estado = 2;
	}
	printf ("\nO numero digitado foi: %s", bits);
	if (estado != 0)
	{
		printf ("\nO numero digitado nao e multiplo de 3");
	}
	else 
	{
		printf ("\nO numero digitado e multiplo de 3");
	}
	return 0;
}
