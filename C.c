#include <stdio.h>

int h1, m1, h2, m2, tempo;

int main()
{
	while( scanf("%d %d %d %d", &h1, &m1, &h2, &m2) && !(h1==h2 && h2==m1 && m1==m2 && m2==0))
	{
		m1 += h1*60;
		m2 += h2*60;
		
		tempo = m2 - m1;
		if(tempo<=0) tempo += 1440; //24 * 60 = 1440
		
		printf("%d\n", tempo);
	}
	
	return 0;
}