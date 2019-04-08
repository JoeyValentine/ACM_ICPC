#include <stdio.h>
int main (){
	int N,F;
	scanf("%d %d",&N,&F);
	for(int i=N-N%100;;++i){
		if(i%F==0){
			printf("%02d\n",i%100);
			return 0;
		}
	}
}
