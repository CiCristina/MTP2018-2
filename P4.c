/*P4.c
Nome: Cibelly Cristina Rodrigues Couto
Numero Matricula: 11811ETE010
*/

#include <stdio.h>

int funcao(int m, int n)
{
  if(m==0){
  return n+1;
  }
  if(n==0 && m>0){
  funcao(m-1,1);
  }
  if(n>0 && m>0){
  funcao(m-1,funcao(m,n-1));
  }
}

int main(){
  int m,n;
  scanf("%i %i",&m,&n);
  printf("%i",funcao(m,n));
}
