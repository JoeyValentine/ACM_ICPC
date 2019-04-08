#include <stdio.h>
#define MOD 1000000000
int main (){
	int N,sum=0,i,dp[101][10]={0};
	scanf("%d",&N);
	dp[1][1]=1,dp[1][2]=1,dp[1][3]=1,dp[1][4]=1,dp[1][5]=1,dp[1][6]=1,dp[1][7]=1,dp[1][8]=1,dp[1][9]=1;
	for(i=2;i<=N;++i){
		dp[i][0]=dp[i-1][1]%MOD;
		dp[i][1]=(dp[i-1][2]%MOD+dp[i-1][0]%MOD)%MOD;
		dp[i][2]=(dp[i-1][1]%MOD+dp[i-1][3]%MOD)%MOD;
		dp[i][3]=(dp[i-1][2]%MOD+dp[i-1][4]%MOD)%MOD;
		dp[i][4]=(dp[i-1][3]%MOD+dp[i-1][5]%MOD)%MOD;
		dp[i][5]=(dp[i-1][4]%MOD+dp[i-1][6]%MOD)%MOD;
		dp[i][6]=(dp[i-1][5]%MOD+dp[i-1][7]%MOD)%MOD;
		dp[i][7]=(dp[i-1][6]%MOD+dp[i-1][8]%MOD)%MOD;
		dp[i][8]=(dp[i-1][7]%MOD+dp[i-1][9]%MOD)%MOD;
		dp[i][9]=dp[i-1][8]%MOD;
	}
	for(i=0;i<10;++i)
		sum+=dp[N][i]%MOD;
	sum%=MOD;
	printf("%d\n",sum);
	return 0;
}
