#include <stdio.h>
#include <algorithm>
int main (){
	long long N,input[50];
	long long result;
	scanf("%lld",&N);
	for(int i=0;i<N;++i)
		scanf("%lld",&input[i]);
	std::sort(input,input+N);
	if(N%2==1) result = input[N/2]*input[N/2];
	else result = input[0]*input[N-1];
	printf("%lld",result);
	return 0;
}
