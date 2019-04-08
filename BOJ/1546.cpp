#include <stdio.h>
int main (){
	int N,i;
	float max=0,input[1000],sum=0;
	scanf("%d",&N);
	for(i=0;i<N;++i){
		scanf("%f",&input[i]);
		if(max<input[i]) max=input[i];
	}
	for(i=0;i<N;++i){
		input[i]=input[i]/max*100;
		sum+=input[i];
	}
	printf("%.2f\n",sum/N);
}
