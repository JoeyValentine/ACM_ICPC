#include <stdio.h>
#include <algorithm>
using namespace std;
#define max(x,y) x>y ? x:y
int main (){
	int N,i,temp=0,maxAns=0;
	pair <int,char> line[2000000];
	scanf("%d",&N);
	for(i=0;i<N*2;++i){
		scanf("%d",&line[i].first);
		if(i%2==0) line[i].second=1;
		else line[i].second=-1;
	}
	sort(line,line+N*2);
	for(i=0;i<N*2;++i){
		temp += line[i].second;
		maxAns = max(temp,maxAns);
	}
	printf("%d\n",maxAns);
	return 0;
}
