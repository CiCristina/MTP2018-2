/*P2.c
Nome: Cibelly Cristina Rodrigues Couto
Numero Matricula: 11811ETE010
*/
#include <stdio.h>

void bindec()
{
	char nbits[256], aux[256];
	int i=0, j, x=0, y=1, dec=0;
	printf("\nDigite o numero binario: ");
			scanf("%s", nbits);
			getchar(); 
			while(nbits[i] != '\0'){
				i++;
				x++;
			}
			j=x-1;
			for(i=0; i<x; i++, j--){ //inverte a string
				aux[j] = nbits[i];
			}
			for(j=1; j<x;j++){  //percorre a partir da seg pos da string
				y=y*2;
				if(aux[j] == '1')
					dec = dec + y;
			}
			if(aux[0] == '1') //primeira pos da string (2^0 x 1 = 1)
				dec = dec +1; //somou com +1
			printf("\nNumero decimal: %d ", dec);
}

void binhex()
{
 
 char bin2[256];
 int cont = 0, z, b=0, x=1,hex=0,convert[100]; 
 printf("\nDigite o numero binario: ");
	   scanf("%s", bin2);
	   getchar();
	   for( cont = 0; bin2[cont]!= '\0'; cont++);
	   cont--;		   
	   for( z = cont; z >= 0 ; z--)
	  {
	  
		if(bin2[z] == '0')
		
		convert[z] = 0;
		else if( bin2[z] == '1')
		convert[z] = 1; 
		}
		b = cont;
		while( b >= 0)
		{
			while( x <= cont - b)
			{
				convert[b] *=2;
				x++;
			}
		
		hex += convert[b];
		x = 1;
		b--;
        }
	  printf("\nNumero hexadecimal: = %x", hex);
}
void hexdec()
{
   char num[256], inum[256];
   int dec=0, i=0, j=0, y=0, x=1;
   printf("\nDigite o numero hexadecimal: ");
   scanf("%s", num);
   getchar();
   while(num[i] != '\0'){
     i++;
     y++;
   }
   j = y-1;
   for(i=0; i<y; i++, j--){
    inum[j] = num[i];
   }
   for(j=1; j<y;j++){
    x=x*16;
    if(inum[j] == '1')
     dec = dec + x;
    if(inum[j] == '2')
     dec = dec + 2*x;
    if(inum[j] == '3')
     dec = dec + 3*x;
    if(inum[j] == '4')
     dec = dec + 4*x;
    if(inum[j] == '5')
     dec = dec + 5*x;
    if(inum[j] == '6')
     dec = dec + 6*x;
    if(inum[j] == '7')
     dec = dec + 7*x;
    if(inum[j] == '8')
     dec = dec + 8*x;
    if(inum[j] == '9')
     dec = dec + 9*x;
    if(inum[j] == 'A')
     dec = dec + 10*x;
    if(inum[j] == 'B')
     dec = dec + 11*x;
    if(inum[j] == 'C')
     dec = dec + 12*x;
    if(inum[j] == 'D')
     dec = dec + 13*x;
    if(inum[j] == 'E')
     dec = dec + 14*x;
    if(inum[j] == 'F')
     dec = dec + 15*x;
   }
   if(inum[0] == '1')
    dec = dec +1;
   if(inum[0] == '2')
    dec = dec + 2;
   if(inum[0] == '3')
    dec = dec + 3;
   if(inum[0] == '4')
    dec = dec + 4;
   if(inum[0] == '5')
    dec = dec + 5;
   if(inum[0] == '6')
    dec = dec + 6;
   if(inum[0] == '7')
    dec = dec + 7;
   if(inum[0] == '8')
    dec = dec + 8;
   if(inum[0] == '9')
    dec = dec + 9;
   if(inum[0] == 'A')
    dec = dec + 10;
   if(inum[0] == 'B')
    dec = dec + 11;
   if(inum[0] == 'C')
    dec = dec + 12;
   if(inum[0] == 'D')
    dec = dec + 13;
   if(inum[0] == 'E')
    dec = dec + 14;
   if(inum[0] == 'F')
    dec = dec + 15;
   printf("\nNumero decimal: %d ", dec);
}

void hexbi()
{
   int n, n_convertido[100], i;
   printf("\nDigite o numero hexadecimal: ");
   scanf("%x", &n);
   getchar();
   for(i = 0; n >= 1; i++)
   {
    n_convertido[i] = n % 2;
    n /= 2;
   }
   printf("\nNumero convertido: ");
   for(i -= 1; i >= 0; i--)
   {
    printf("%i", n_convertido[i]);
   }
}

void decbi()
{
	int num, r, i;
    printf("Digite o numero: ");
    scanf("%d", &num);
    for(i = 9; i >= 0; i--) 
 {
       r = num >> i;
        if(r & 1) 
           {printf("1");}
        else 
           {printf("0");}
 }
    printf("\n");
}

void dechex()
{
   int num, v_num[256], i=0, j;
   printf("\nDigite o numero decimal: ");
   scanf("%d", &num);
   getchar();
   while(num > 0){
    v_num[i] = num % 16;
    i++;
    num = num / 16;
   }
   printf("\n");
   for(j = i - 1; j >= 0; j--){
    if(v_num[j] >= 0 && v_num[j] <= 9 )
     printf("%d", v_num[j]);
    if(v_num[j] == 10)
     printf("A");
    if(v_num[j] == 11)
     printf("B");
    if(v_num[j] == 12)
     printf("C");
    if(v_num[j] == 13)
     printf("D");
    if(v_num[j] == 14)
     printf("E");
    if(v_num[j] == 15)
     printf("F");
    }
}

void octdec()
{
   char num[256], inum[256];
   int i=0, j, y=0, x=1, dec=0;
   printf("\nDigite o numero octal: ");
   scanf("%s", num);
   getchar();
   while(num[i] != '\0'){
    i++;
    y++;
   }
   j = y -1;
   for(i=0; i<y; i++, j--){
    inum[j] = num[i];
   }
   for(j=1; j<y;j++){
    x=x*8;
    if(inum[j] == '1')
     dec = dec + x;
    if(inum[j] == '2')
     dec = dec + 2*x;
    if(inum[j] == '3')
     dec = dec + 3*x;
    if(inum[j] == '4')
     dec = dec + 4*x;
    if(inum[j] == '5')
     dec = dec + 5*x;
    if(inum[j] == '6')
     dec = dec + 6*x;
    if(inum[j] == '7')
     dec = dec + 7*x;
   }
   if(inum[0] == '1')
    dec = dec +1;
   if(inum[0] == '2')
    dec = dec + 2;
   if(inum[0] == '3')
    dec = dec + 3;
   if(inum[0] == '4')
    dec = dec + 4;
   if(inum[0] == '5')
    dec = dec + 5;
   if(inum[0] == '6')
    dec = dec + 6;
   if(inum[0] == '7')
    dec = dec + 7;
   printf("\nNumero decimal: %d ", dec);
}

void decoct()
{
   int d_num, v_num[256], i=0, j;
   printf("\nDigite o numero decimal: ");
   scanf("%d", &d_num);
   getchar();
   while(d_num > 0){
    v_num[i] = d_num % 8;
    i++;
    d_num = d_num / 8;
   }
   printf("\n");
   printf("\nNumero octal: ");
   for(j = i - 1; j >= 0; j--)
    printf("%d", v_num[j]);	
}

int main ()
{
	int  opcao;
	printf("Conversao de bases numericas\n");
	printf("Digite \n1- Para converter o numero de binario para decimal");
	printf("\n2- Para converter binario em hexadecimal");
	printf("\n3- Para converter de hexadecimal para decimal");
	printf("\n4- Para converter de hexadecimal para binario");
	printf("\n5- Para converter de decimal para binario"); 
	printf("\n6- Para converter de decimal para hexadecimal");
	printf("\n7- Para converter de octal para decimmal");
	printf("\n8- Para converter de decimal para octal");
	printf("\n9- Sair do programa\n");
	scanf("%d", &opcao);
		switch(opcao)
		{
			case 1: 
				bindec();
				break;
				return 0;
			case 2:
				binhex();
				break;
				return 0;
			case 3:
				hexdec();
				break;
				return 0;
			case 4:
				hexbi();
				break;
				return 0;
			case 5:
			    decbi();
			    break;
			    return 0;
			case 6:
				dechex();
				break;
				return 0;
			case 7:
				octdec();
				break;
				return 0;
			case 8:
				decoct();
				break;
				return 0;
			case 9:
				return 0;
			default:
				break;			
		}
	return 0;
}
