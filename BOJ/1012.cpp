#include <stdio.h>
#include <cstring>
int map[50][50]={0};
int M,N,K,cnt;
int dy[]={1,0,-1,0};
int dx[]={0,-1,0,1};
void dfs(int x, int y){
	if(x<0 || x>=N || y<0 || y>=M) return;
	if(map[x][y]==0) return;
	map[x][y]=0;
	for(int i=0; i<4; ++i)
		dfs(x+dx[i], y+dy[i]);
}
void dfsAll(){
	cnt=0;
	for(int i=0; i<N; ++i){
		for(int j=0; j<M; ++j){
			if(map[i][j]){
				cnt++;
				dfs(i,j);
			}
		}
	}
}
int main(){
	int TestCase,a,b;
	scanf("%d",&TestCase);
	for(int i=0;i<TestCase;i++){
		scanf("%d %d %d",&M,&N,&K);
		memset(map,0,sizeof(map));
		for(int j=0;j<K;j++){
			scanf("%d %d",&a,&b);
			printf("%d %d\n",a,b);
			map[a][b] = 1;
		}
		dfsAll();
		printf("%d\n",cnt);
	}
	return 0;
}
