#include <stdio.h>
#define mod %1000000007
int main (){
	unsigned long long int T,L,i,j,C[2501]={0};
	scanf("%lld",&T);
	C[0]=1;C[1] = 1;
	for(i=1;i<=2499;++i)
		for(j=0;j<i+1;j++)
			C[i+1] += ((C[j]mod)*(C[i-j]mod))mod;
	for(i=0;i<T;++i){
		scanf("%lld",&L);
		if(L%2!=0) puts("0");
		else if(L%2==0) printf("%lld\n",C[L/2]mod);
	}
	return 0;
}
