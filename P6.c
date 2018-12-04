
/*P6.c
Nome: Cibelly Cristina Rodrigues Couto
Numero Matricula: 11811ETE010
*/
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef
	struct p {
		float x;
		float y;
	}
Ponto;

Ponto * gerap(int N){
	Ponto * p = (Ponto *) calloc(N,sizeof(Ponto));
	int i;
	for(i=0; i<N; i++){
		p[i].x = cos(i*2.0*M_PI/(N-1));
		p[i].y = sin(i*2.0*M_PI/(N-1));
	}
	return p;
}

void mostrap(Ponto * pi, Ponto * pf){
	if(pi < pf){
		printf("(%.3f, %.3f) ", pi->x, pi->y);
		mostrap(pi+1, pf);
	}
}

int main()
{
	unsigned int N;
	Ponto * p;
	printf("Entre com o numero de pontos:: ");
	scanf("%d",&N);
	getchar();
	p = gerap(N);
	mostrap(p, p+N);
	free(p);
	return 0;
}
