#include <stdio.h>
#include <queue>
using namespace std;
int N,M,graph[1001][1001];
bool visitedDFS[1001]={false};
void dfs(int node){
	int i;
	printf("%d ",node);
	visitedDFS[node] = true;
	for(i=1;i<=N;i++)
		if(graph[node][i]==1 && visitedDFS[i]==false){
			dfs(i);
		}
}
void bfs(int start){
	bool visitedBFS[1001] = {false};
	vector <int> queue;
	queue.push_back(start);
	if(visitedBFS[start]==false){
		printf("%d ",start);
		visitedBFS[start] = true;
	}
	while(!queue.empty()){
		int t = queue[0];
		queue.erase(queue.begin());
		for(int i=1;i<=N;i++){
			if(graph[t][i]==1 && visitedBFS[i]==false){
				queue.push_back(i);
				printf("%d ",i);
				visitedBFS[i] = true;
			}
		}
	}
}
int main (){
	int V,i,a,b;
	scanf("%d %d %d",&N,&M,&V);
	for(i=0;i<M;i++){
		scanf("%d %d",&a,&b);
		graph[a][b] = 1;
		graph[b][a] = 1;
	}
	dfs(V); puts("");
	bfs(V);
	return 0;
}
