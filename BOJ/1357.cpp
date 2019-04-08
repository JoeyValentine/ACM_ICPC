#include <stdio.h>
int Rev(int x){
	int ret=0;
	for(int temp=x;temp>0;temp/=10){
		ret*=10;
		ret+=temp%10;
	}
	return ret;
}
int main (){
	int X,Y;
	scanf("%d %d",&X,&Y);
	printf("%d\n",Rev(Rev(X)+Rev(Y)));
	return 0;
}
