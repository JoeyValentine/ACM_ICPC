#include <stdio.h>
int main (){
	int parent[50]={0},numOfChild[50]={0},N,i,numOfLeaf=0,del,start;
	scanf("%d",&N);
	for(i=0;i<N;++i){
		scanf("%d",&parent[i]);
		if(parent[i]!=-1)
			++numOfChild[parent[i]];
	}
	scanf("%d",&del);
	parent[del]=-2;
	for(i=0;i<N;++i)
		if(parent[i]!=-1&&numOfChild[i]==0)
			for(start=parent[i];start!=-2;start=parent[start])
				if(start==-1){
					++numOfLeaf;
					break;
				}
	printf("%d\n",numOfLeaf);
	return 0;
}
