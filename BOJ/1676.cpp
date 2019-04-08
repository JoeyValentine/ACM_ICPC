#include <stdio.h>
#define min(x,y) x>y ? y:x
//이 함수는 n!을 소인수 분해했을 때 특정 소수의 차수를 반환하는 함수이다.
int primeDegreeReturn(int n,int prime){
	int ans=0;
	while((n/=prime)!=0)
		ans+=n;
	return ans;
}
int main (){
	int numOf2,numOf5,n;
	scanf("%d",&n);
	numOf2=primeDegreeReturn(n,2);
	numOf5=primeDegreeReturn(n,5);
	printf("%d\n",min(numOf2,numOf5));
	return 0;
}
