#include <stdio.h>

int main (){

	long long int min,max,count,i;

	scanf("%lld %lld",&min,&max);

	count = max - min + 1;

	for(i=2;i*i<=max;i++){
		if(i*i>=min)
			count--;
	}


	printf("%lld\n",count);

	return 0;
}
