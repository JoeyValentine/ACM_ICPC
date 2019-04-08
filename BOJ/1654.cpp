#include <stdio.h>
#include <algorithm>
using namespace std;
int len[10000];
bool decision(int* len,int K,int N,int mid){
	int i,count=0;
	for(i=0;i<K;i++)
		count += len[i]/mid;
	if(count>=N) return true;
	else return false;
}
int main (){
	int K,N,end,start,ans,i,mid;
	scanf("%d %d",&K,&N);
	for(i=0;i<K;++i)
		scanf("%d",&len[i]);
	sort(len,len+K);
	start = 0; end = len[K-1];
	while(start<=end){
		mid = (start+end)/2;
		if(decision(len,K,N,mid)){ 
			ans = mid;
			start = mid+1;
		}
		else end = mid-1;
	}
	printf("%d\n",ans);
	return 0;
}
