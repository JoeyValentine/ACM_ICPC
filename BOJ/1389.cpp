#include <stdio.h>
#include <algorithm>
#include <queue>
#define INF 987654321
using namespace std;
int N,M;
vector<pair<int,int> > adj[101];
vector<int> dijkstra(int start){
	vector<int> dist(N+1,INF);
	dist[start]=0;
	priority_queue<pair<int,int> > pq;
	pq.push(make_pair(0,start));
	while(!pq.empty()){
		int cost = -pq.top().first;
		int here = pq.top().second;
		pq.pop();
		if(dist[here]<cost) continue;
		for(int i=0;i<adj[here].size();++i){
			int there = adj[here][i].first;
			int nextDist = cost + adj[here][i].second;
			if(dist[there]>nextDist){
				dist[there] = nextDist;
				pq.push(make_pair(-nextDist,there));
			}
		}
	}
	return dist;
}
int main (){
	vector <int> dist;
	vector <pair<int,int> > bacon;
	scanf("%d %d",&N,&M);
	for(int i=0;i<M;++i){
		int u,v,w;
		scanf("%d %d",&u,&v);
		adj[v].push_back(make_pair(u,1));
		adj[u].push_back(make_pair(v,1));
	}
	for(int start=1;start<=N;++start){
		int temp = 0;
		dist=dijkstra(start);
		for(int i=1;i<dist.size();++i)
			temp += dist[i];
		bacon.push_back(make_pair(temp,start));
	}
	sort(bacon.begin(),bacon.end());
	printf("%d\n",bacon[0].second);
	return 0;
}
