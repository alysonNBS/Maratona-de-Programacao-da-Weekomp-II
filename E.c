#include <stdio.h>

#define invoca_prassodia(k,l,m) (k==a && l==d && m==h )

int main() {
	int n, a, d, h, x[20], y[20], z[20], i, j, sum[3], size_sub_set;
	
	scanf("%d%d%d%d", &n, &a, &d, &h);
	
	for(i=0; i<n; i++)
		scanf("%d%d%d", x+i, y+i, z+i);
	
	for(i=0; i < (1<<n); i++){
		size_sub_set = sum[0] = sum[1] = sum[2] = 0;
		
		for(j=0; j<n; j++){
			if( i & (1<<j) ){
				sum[0] += x[j];
				sum[1] += y[j];
				sum[2] += z[j];
				size_sub_set++;
			}
		}
		
		if( invoca_prassodia(sum[0], sum[1], sum[2]) && size_sub_set > 1)
			break;
	}
	
	if( invoca_prassodia(sum[0], sum[1], sum[2]) && size_sub_set > 1)
		printf("Y\n");
	else
		printf("N\n");
	
	return 0;
}