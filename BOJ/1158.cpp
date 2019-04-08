#include <stdio.h>
#include <queue>

using namespace std;

int main (){

	vector<int> vt;
	vector<int> output;
	int N,M,i,j,beforeIndex;

	scanf("%d %d",&N,&M);

	for(i=0;i<N;i++)
		vt.push_back(i+1);

	beforeIndex = 0;
	while(!vt.empty()){
		beforeIndex += M-1;
		if(beforeIndex>=vt.size())
			beforeIndex%=vt.size();
		output.push_back(vt[beforeIndex]);
		vt.erase(vt.begin()+beforeIndex);
	}

	printf("<");
	for(i=0;i<N;i++)
		if(i!=N-1)
			printf("%d, ",output[i]);
		else
			printf("%d>\n",output[i]);

	return 0;
}

