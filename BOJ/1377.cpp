#include <stdio.h>
#include <algorithm>
#define max(x,y) x>y ? x:y
using namespace std;
int main (){
	int N,A[500001],Asort[500001],i,index,maxDif=0;
	scanf("%d",&N);
	for(i=1;i<=N;++i){
		scanf("%d",&A[i]);
		Asort[i]=A[i];
	}
	sort(Asort+1,Asort+N+1);
	for(i=1;i<=N;++i){
		index = (int)(upper_bound(Asort+1,Asort+N+1,A[i])-Asort-1);
		maxDif=max(maxDif,i-index);
	}
	printf("%d\n",maxDif+1);
	return 0;
}
