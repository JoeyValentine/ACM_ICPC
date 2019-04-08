#include <stdio.h>
int main (){
	int T,A=0,B=0,C=0;
	scanf("%d",&T);
	if(T%10!=0){ 
		puts("-1");
		return 0;
	}
	A=T/300;
	T%=300;
	B=T/60;
	T%=60;
	C=T/10;
	printf("%d %d %d\n",A,B,C);
	return 0;
}
