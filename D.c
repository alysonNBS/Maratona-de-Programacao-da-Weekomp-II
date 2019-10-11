#include <stdio.h>

#define abs(a) (a<0 ? -a : a)

int main(void) {
	int n, a[100100], i;
	
	while(scanf("%d", &n) && n) {
		long long int trabalho=0;
		
		for(i=0; i<n; i++)
			scanf("%d", a+i);
		
		for(i=0; i<n-1; i++){
			trabalho += abs(a[i]);
			a[i+1] += a[i];
		}
			
		
		printf("%lld\n", trabalho);
	}
	
	return 0;
}
