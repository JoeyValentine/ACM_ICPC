#include <stdio.h>
#include <queue>
#include <algorithm>
#define max(x,y) ((x)>(y) ? (x):(y))
using namespace std;
int W,T,N,K,D[1001],indegree[1001],dp[1001];
vector <int> adj[1001];
int topological_sort(int u){
	int &ans = dp[u];
	if(ans!=-1) return ans;
	ans = D[u]; int temp = 0;
	for(int i=0;i<adj[u].size();++i){
		int v = adj[u][i];
		--indegree[v];
		if(indegree[v]==0)
			--indegree[v];
		temp=max(topological_sort(v),temp);
	}
	ans+=temp;
	return ans;
}
int main (){
	int temp;
	scanf("%d",&T);
	while(T--){
		for(int i=0;i<1001;++i){
			dp[i]=-1;
			D[i]=0;
			indegree[i]=0;
		}
		scanf("%d %d",&N,&K);
		for(int i=1;i<=N;++i)
			scanf("%d",&D[i]);
		for(int i=0;i<K;++i){
			int u,v;
			scanf("%d %d",&u,&v);
			adj[v].push_back(u);
			++indegree[u];
		}
		scanf("%d",&W);
		printf("%d\n",topological_sort(W));
	}
	return 0;
}
