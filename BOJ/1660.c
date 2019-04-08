#include <stdio.h>
int main (){
	int i, j,N,min,k,a[120],dp[300001];
	scanf("%d",&N);
	for(i=0;i<120;i++)
		a[i] = (i+1)*(i+2)*(i+3)/6;
	dp[0] = 0;
	for(i=1;i<=N;i++){
		min = 2000000000;
		for(j=0;j<120;j++)
			if(i-a[j]>=0 && 1+dp[i-a[j]]<min)
				min = 1 + dp[i-a[j]];
		dp[i] = min;
	}
	printf("%d\n",dp[N]);
	return 0;
}
