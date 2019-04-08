#include <stdio.h>
int main (){
	unsigned long long sum,L,U;
	scanf("%lld %lld",&L,&U);
	sum=U/2*(U-1)-L/2*(L-1);
	printf("%lld\n",sum);
	return 0;
}
