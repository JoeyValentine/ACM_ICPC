#include <stdio.h>
#include <string.h>
#define INF 987654321
int M,N,count=0,flag=0;
int board[500][500];
int dp[500][500];
int dx[] = {1,0,0,-1};
int dy[] = {0,1,-1,0};
int dfs(int x,int y,int height){
	if(x<0 || x>=M || y<0 || y>=N) return 0;
	if(flag==1 && board[x][y]>=height ) return 0;
	flag = 1;
	if(x==M-1 && y==N-1) return 1;
	int &ans = dp[x][y];
	if(ans!=-1) return ans;
	ans = 0;
	for(int i=0;i<4;i++)
		ans += dfs(x+dx[i],y+dy[i],board[x][y]);
	return ans;
}
int main (){
	scanf("%d %d",&M,&N);
	memset(board,INF,sizeof(board));
	memset(dp,-1,sizeof(dp));
	for(int i=0;i<M;i++)
		for(int j=0;j<N;j++)
			scanf("%d",&board[i][j]);
	printf("%d\n",dfs(0,0,board[0][0]));
	return 0;
}
