#include <stdio.h>
#include <queue>
#include <algorithm>
using namespace std;
int linearSearch(vector<int> vt,int key){
	int i,size=vt.size();
	for(i=0;i<size;i++)
		if(key==vt[i]) return i;
	return -1;
}
int main (){
	int N,M,i,j,input[50],mid,targetIndex,count=0,temp;
	vector<int> vt;
	scanf("%d %d",&N,&M);
	for(i=1;i<=N;i++)
		vt.push_back(i);
	for(i=0;i<M;i++)
		scanf("%d",&input[i]);
	for(i=1;i<=M;){
		mid = vt.size()/2;
		targetIndex = linearSearch(vt,input[i-1]);
		if(input[i-1]==vt[0]){
			vt.erase(vt.begin());
			i++;
		}
		else if(mid>=targetIndex){
			rotate(vt.begin(),vt.begin()+1,vt.end());
			count++;
		}
		else if(mid<targetIndex){
			temp = vt[vt.size()-1];
			copy(vt.begin(),vt.begin()+vt.size(),vt.begin()+1);
			vt[0] = temp;
			count++;
		}
	}
	printf("%d\n",count);
	return 0;
}
