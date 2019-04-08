#include <stdio.h>
#include <algorithm>
using namespace std;
int main (){
	int connection[100000],C[100000],N,i;
	scanf("%d",&N);
	for(i=0;i<N;++i)
		scanf("%d",&connection[i]);
	fill(C,C+N,100001);
	for(i=0;i<N;++i)
		*lower_bound(C,C+N,connection[i]) = connection[i];
	printf("%d\n",N-(int)(lower_bound(C,C+N,100001)-C));
	return 0;
}
