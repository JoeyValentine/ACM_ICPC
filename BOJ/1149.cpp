#include <stdio.h>
#define min(x,y) (x>y ? y:x)
int main (){
	int N,i,j,dp[2][3],cost[3];
	scanf("%d",&N);
	for(i=1;i<=N;++i){
		scanf("%d %d %d",&cost[0],&cost[1],&cost[2]);
		if(i!=1){
			dp[i%2][0] = min(dp[(i-1)%2][1],dp[(i-1)%2][2])+cost[0];
			dp[i%2][1] = min(dp[(i-1)%2][0],dp[(i-1)%2][2])+cost[1];
			dp[i%2][2] = min(dp[(i-1)%2][0],dp[(i-1)%2][1])+cost[2];
		}
		else{
			dp[1][0]=cost[0]; dp[1][1]=cost[1]; dp[1][2]=cost[2];
		}
	}
	printf("%d\n",min(dp[N%2][0],min(dp[N%2][1],dp[N%2][2])));
	return 0;
}
