#include <stdio.h>
#include <math.h>

int x1, Y1, x2, y2;

int eh_a_mesma_posicao()
{
	if( x1 == x2 && Y1 == y2 ) return 1;
	return 0;
}

int cima_baixo_ou_diagonal()
{
	if( x1 == x2 || Y1 == y2 || abs(x1-x2) == abs(Y1-y2) ) return 1;
	return 0;
}

int quantidade_de_movimentos()
{
	if( eh_a_mesma_posicao() ) return 0;
	if( cima_baixo_ou_diagonal() ) return 1;
	return 2;
}

int main(void) {
	while(scanf("%d %d %d %d", &x1, &Y1, &x2, &y2) && x1 != 0)
	{
		printf("%d\n", quantidade_de_movimentos() );
	}
	
	return 0;
}
