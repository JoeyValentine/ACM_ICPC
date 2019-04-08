#include <stdio.h>
long long fast_expon(long long a,long long n,long long C){
	if(n==0) return 1;
	long long half = fast_expon(a,n/2,C);
	if(n%2==0) return ((half%C)*(half%C))%C;
	else return (((half%C)*(half%C))%C*(a%C))%C;
}
int main (){
	long long A,B,C;
	scanf("%lld %lld %lld",&A,&B,&C);
	printf("%lld\n",fast_expon(A,B,C));
	return 0;
}
