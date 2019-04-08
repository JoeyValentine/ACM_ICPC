#include <stdio.h>
void swap(bool *a,bool *b){
	bool temp=*a;
	*a=*b;
	*b=temp;
}
int main (){
	bool ballPosition[3]={true,false,false};
	int N,i,input1,input2;
	scanf("%d",&N);
	for(i=0;i<N;++i){
		scanf("%d %d",&input1,&input2);
		swap(&ballPosition[input1-1],&ballPosition[input2-1]);
	}
	for(i=0;i<3;++i)
		if(ballPosition[i])
			printf("%d\n",i+1);
	return 0;
}
