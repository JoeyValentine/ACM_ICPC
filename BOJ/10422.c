#include <stdio.h>
#define MOD %1000000007;

int main (){

	unsigned long long T,N,M,i,j,k,count=0,nCr[201][101],sum,dp[101];

	scanf("%lld",&T);

	nCr[1][0] = 1;
	nCr[0][0] = 1;

	for(i=1;i<=T;i++){
		nCr[2*i][i] = ((1/i)*nCr[2*i-1][i])MOD + ((1/i)*nCr[2*i-1][i-1])MOD;
		nCr[2*i][i] = nCr[2*i][i]MOD;
	}

	for(i=1;i<=T;i++)
		dp[i] = nCr[2*i][i];

	printf("%lld\n",dp[T]);

	return 0;
}
