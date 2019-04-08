#include <stdio.h>
#define mod %1000000
int main (){
	int N,dp[2][2][3]={0},i;
	scanf("%d",&N);
	dp[1][0][0] = 1; dp[1][0][1] = 1; dp[1][1][0] = 1;
	for(i=2;i<=N;i++){
		dp[i%2][0][0] = (dp[(i-1)%2][0][0]mod + dp[(i-1)%2][0][1]mod + dp[(i-1)%2][0][2]mod)mod;
		dp[i%2][0][1] = dp[(i-1)%2][0][0]mod;
		dp[i%2][0][2] = dp[(i-1)%2][0][1]mod;
		dp[i%2][1][0] = (dp[(i-1)%2][0][0]mod + dp[(i-1)%2][0][1]mod + dp[(i-1)%2][0][2]mod + dp[(i-1)%2][1][0]mod + dp[(i-1)%2][1][1]mod + dp[(i-1)%2][1][2]mod)mod;
		dp[i%2][1][1] = dp[(i-1)%2][1][0]mod;
		dp[i%2][1][2] = dp[(i-1)%2][1][1]mod;
	}
	printf("%d\n",(dp[N%2][0][0]mod+dp[N%2][0][1]mod+dp[N%2][0][2]mod+dp[N%2][1][0]mod+dp[N%2][1][1]mod+dp[N%2][1][2]mod)mod);
	return 0;
}
