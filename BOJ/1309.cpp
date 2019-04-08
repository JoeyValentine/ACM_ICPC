#include <stdio.h>
#define MOD %9901
int main (){
	int N,dp[2][3],i;
	scanf("%d",&N);
	dp[1][0] = 1; dp[1][1] = 1; dp[1][2] = 1;
	for(i=2;i<=N;++i){
		dp[i%2][0] = (dp[(i-1)%2][1]MOD + dp[(i-1)%2][2]MOD)MOD;
		dp[i%2][1] = (dp[(i-1)%2][0]MOD + dp[(i-1)%2][2]MOD)MOD;
		dp[i%2][2] = (dp[(i-1)%2][0]MOD + dp[(i-1)%2][1]MOD + dp[(i-1)%2][2]MOD)MOD;
	}
	printf("%d\n",((dp[N%2][0])MOD + (dp[N%2][1])MOD + (dp[N%2][2])MOD)MOD);
	return 0;
}
