#include <stdio.h>
int main (){
	long long N,start,end,mid,count=0,i,ride[10000],M,numMid,numMid_1;
	scanf("%lld %lld",&N,&M);
	for(i=0;i<M;++i)
		scanf("%lld",&ride[i]);
	start = 0,end = N;
	while(start<=end){
		count = 0;
		numMid_1 = 0, numMid = 0;
		mid = (start+end)/2;
		for(i=0;i<M;++i){
			numMid += mid/ride[i]+1;
			if(mid-1>0)
				numMid_1 += (mid-1)/ride[i]+1;
		}
		printf("%lld %lld %lld\n",numMid,numMid_1,mid);
		if(numMid<=N){ 
			for(i=0;i<M;++i){
				if(mid%ride[i]==0)
					++count;
				if(count + numMid_1 == numMid){
					printf("%lld %lld\n",i+1,mid);
					return 0;
				}
			}
			start = mid + 1;
		}
		else end = mid - 1;
	}
	return 0;
}
