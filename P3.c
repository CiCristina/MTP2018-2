/*P3.c
Nome: Cibelly Cristina Rodrigues Couto
Numero Matricula: 11811ETE010
*/

#include <stdio.h>

int arg1( int num1)
{
	printf("\nDigite um numero inteiro: ");
	scanf("%d", &num1);
	return num1;
}

int arg2( int num2)
{
	printf("\nDigite outro numero inteiro: ");
	scanf("%d", &num2);
    return num2;
}

int decbi(int num)
{
	int i, j, vet_num[256];
	getchar();
	while(num > 0)
	{
		vet_num[i]=num%2;
		i++;
		num=num/2;
	}
	printf("(");
	for(j = i - 1; j >= 0; j--)
	{printf("%d", vet_num[j]);}
	printf(")");
}

int main ()
{
	int opcao, num1, num2, i=0, j=0, aux=0;
	printf("**CALCULADORA DE OPERACOES BITWISE**");
	printf("\n Digite: \n1)NOT \n2)AND \n3)OR \n4)XOR \n5)Right Shif \n6)Left Shift \n7)Sair do programa\n");
	scanf("%d", &opcao);
	switch(opcao)
	{
		case 1:
			num1=arg1(num1);
			if(num1 < 0)
				{num1=num1*(-1);}
			decbi(num1);
			printf(" : ");
			num1 = ~num1;
			printf("NOT %d ", num1);
			if(num1 < 0)
				{num1=num1*(-1);}
			num1=decbi(num1);
			break;
		case 2:
            num1=arg1(num1);
     		if(num1 < 0)
	    		{num1=num1*(-1);}
	    	decbi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
	    	if(num2 < 0)
		    	{num2=num2*(-1);}
		    decbi(num2);
		    printf(" : ");
		    aux = num1 & num2;
		    printf("AND %d ", aux);
			aux=decbi(aux);
			break;
		case 3:
			num1=arg1(num1);
     		if(num1 < 0)
	    		{num1=num1*(-1);}
	    	decbi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
	    	if(num2 < 0)
		    	{num2=num2*(-1);}
		    decbi(num2);
		    printf(" : ");
		    aux = num1 | num2;
		    printf("OR %d ", aux);
			aux=decbi(aux);
     		printf(")");
			break;
		case 4:
			num1=arg1(num1);
     		if(num1 < 0)
	    		{num1=num1*(-1);}
	    	decbi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
	    	if(num2 < 0)
		    	{num2=num2*(-1);}
		    decbi(num2);
		    printf(" : ");
		    aux = num1 ^ num2;
		    printf("XOR %d ", aux);
			aux=decbi(aux);
     		printf(")");
			break;
		case 5:
			num1=arg1(num1);
	    	decbi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
		    decbi(num2);
		    printf(" : ");
		    aux = num1 >> num2;
		    printf("Right Shift %d ", aux);
			aux=decbi(aux);
			break;
		case 6:
			num1=arg1(num1);
			if(num1 < 0)
	    		{num1=num1*(-1);}
	    	decbi(num1);
	    	printf(" : ");
	    	num2=arg2(num2);
	    	if(num2 < 0)
	    		{num2=num2*(-1);}
		    decbi(num2);
		    printf(" : ");
		    aux = num1 << num2;
		    printf("Left Shift %d ", aux);
			aux=decbi(aux);
			break;
		case 7:
			return 0;
	}
}
