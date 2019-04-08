#include <stdio.h>
#include <algorithm>
using namespace std;
typedef struct{
	int len,end;
}WORK;
bool compare(WORK a,WORK b){ return a.end>b.end; }
int main (){
	WORK schedule[1000];
	int N,i,temp;
	scanf("%d",&N);
	for(i=0;i<N;++i)
		scanf("%d %d",&schedule[i].len,&schedule[i].end);
	sort(schedule,schedule+N,compare);
	for(temp=schedule[0].end,i=0;i<N;++i){
		if(temp>schedule[i].end) temp=schedule[i].end;
		temp-=schedule[i].len;
	}
	printf("%d\n",temp>0 ? temp:-1);
	return 0;
}
