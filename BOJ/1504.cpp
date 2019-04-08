#include <stdio.h>
#include <queue>
#define INF 9876543210LL
using namespace std;
int N,E;
vector<pair<int,long long> > adj[801];
long long min(long long x,long long y){
	if(x>y) return y;
	else return x;
}
vector<long long> dijkstra(int src){
	vector<long long> dist(N+1,INF);
	dist[src]=0;
	priority_queue<pair<long long,int> > pq;
	pq.push(make_pair(0,src));
	while(!pq.empty()){
		long long cost = -pq.top().first;
		int here = pq.top().second;
		pq.pop();
		if(dist[here]<cost) continue;
		for(int i=0;i<adj[here].size();++i){
			int there = adj[here][i].first;
			long long nextDist = cost + adj[here][i].second;
			if(dist[there]>nextDist){
				dist[there] = nextDist;
				pq.push(make_pair(-nextDist,there));
			}
		}
	}
	return dist;
}
int main (){
	vector <long long> dist1,dist2,dist3;
	int point1,point2;
	long long ans;
	scanf("%d %d",&N,&E);
	for(int i=0;i<E;++i){
		int a,b;
		long long c;
		scanf("%d %d %lld",&a,&b,&c);
		adj[a].push_back(make_pair(b,c));
		adj[b].push_back(make_pair(a,c));
	}
	scanf("%d %d",&point1,&point2);
	dist1=dijkstra(1);
	dist2=dijkstra(point1);
	dist3=dijkstra(point2);
	ans = min(dist1[point1]+dist2[point2]+dist3[N],dist1[point2]+dist3[point1]+dist2[N]);
	if(ans>=INF)
		puts("-1");
	else
		printf("%lld\n",ans);
	return 0;
}
