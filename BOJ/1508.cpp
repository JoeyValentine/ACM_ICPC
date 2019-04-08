#include <stdio.h>
#include <string.h>

bool decision(int N,int M,int K,int* position,int mid,char* temp,char* result){
	int i,from=position[0],count=1;
	temp[0] = '1';
	for(i=1;i<K;++i){
		if(position[i]-from>=mid){
			temp[i] = '1';
			++count;
			from = position[i];
			if(count>=M) return true;
		}
	}
	return false;
}
int main (){
	char result[10000],temp[10000];
	int N,M,K,i,position[10000],start,end,mid;
	scanf("%d %d %d",&N,&M,&K);
	for(i=0;i<K;++i)
		scanf("%d",&position[i]);
	memset(result,'0',sizeof(result));
	start = 0; end = N;
	while(start<=end){
		mid = (start+end)/2;
		memset(temp,'0',sizeof(temp));
		if(decision(N,M,K,position,mid,temp,result)){
			strncpy(result,temp,K);
			start = mid + 1;
		}
		else
			end = mid - 1;
	}
	for(i=0;i<K;++i)
		printf("%c",result[i]);
	puts("");
	return 0;
}
