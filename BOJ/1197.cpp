#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;
short p[10001];
void init(short n){
	for (short i=1;i<=n;++i)
		p[i] = i;
}
short find(short x){
	return p[x] == x ? x : p[x]=find(p[x]);
}
void unite(short x,short y){
	x=find(x);
	y=find(y);
	p[x] = y;
}
int main(){
	short V,s,e,i,u,v;
	int E,t,ans=0;
	scanf("%hd %d",&V,&E);
	init(V);
	vector<pair<int,pair<short,short> > > list;
	for (i=0;i<E;++i){
		scanf("%hd %hd %d",&s,&e,&t);
		list.push_back(make_pair(t,make_pair(s,e)));
	}
	sort(list.begin(),list.end());
	for (i=0;i<list.size();++i){
		u=list[i].second.first;
		v=list[i].second.second;
		u=find(u);
		v=find(v);
		if (u!=v){
			unite(u,v);
			ans += list[i].first;
		}
	}
	printf("%d\n",ans);
	return 0;
}
