#include <algorithm>
#include <string.h>
#include <stdio.h>
#include <queue>
using namespace std;
char map[101][101],map2[101][101];
int N,cntNormal=0,cntBlind=0;
int dy[]={-1,0,0,1};
int dx[]={0,-1,1,0};
void dfsNormal(int y, int x,char keyWord){
	if(y<0 || y>=N || x<0 || x>=N) return;
	if(map[y][x]==0) return;
	if(map[y][x]!=keyWord) return;
	else map[y][x]=0;
	for(int i=0; i<4; ++i)
		dfsNormal(y+dy[i],x+dx[i],keyWord);
}
void dfsBlind(int y, int x,char keyWord){
	if(y<0 || y>=N || x<0 || x>=N) return;
	if(map2[y][x]==0) return;
	if(keyWord=='R'&&map2[y][x]=='R' || keyWord=='R' && map2[y][x]=='G')
		map2[y][x]= 0;
	else if(keyWord=='B' && map2[y][x]=='B')
		map2[y][x] = 0;
	else return;
	for(int i=0; i<4; ++i)
		dfsBlind(y+dy[i], x+dx[i],keyWord);
}
void dfsAllNormal(){
	cntNormal=0;
	for(int i=0; i<N; ++i){
		for(int j=0; j<N; ++j){
			if(map[i][j]=='R'){
				cntNormal++;
				dfsNormal(i,j,map[i][j]);
			}
			else if(map[i][j]=='G'){
				cntNormal++;
				dfsNormal(i,j,map[i][j]);
			}
			else if(map[i][j]=='B'){
				cntNormal++;
				dfsNormal(i,j,map[i][j]);
			}
		}
	}
}
void dfsAllBlind(){
	cntBlind=0;
	for(int i=0; i<N; ++i){
		for(int j=0; j<N; ++j){
			if(map2[i][j]=='R' || map2[i][j]=='G'){
				cntBlind++;
				dfsBlind(i,j,'R');
			}
			else if(map2[i][j]=='B'){
				cntBlind++;
				dfsBlind(i,j,'B');
			}
		}
	}
}
int main(){
	char temp;
	scanf("%d%*c",&N);
	for(int i=0; i<N; i++)
		gets(map[i]);
	for(int i=0;i<N;i++)
		for(int j=0;j<N;j++)
			map2[i][j] = map[i][j];
	dfsAllNormal();
	dfsAllBlind();
	printf("%d\n%d\n",cntNormal,cntBlind);
	return 0;
}
