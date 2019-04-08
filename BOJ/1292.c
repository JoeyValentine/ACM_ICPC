#include <stdio.h>
int main (){

	long long i,j,A,B,ary[2000],input=1,len=1;
	long long sum=0;

	scanf("%lld %lld",&A,&B);
	for(i=0;i<B;){
		for(j=i;j<i+len;j++)
			ary[j]=input;
		i = j;
		input++;
		len++;
	}

	for(i=A-1;i<B;i++)
		sum+=(long long)ary[i];

	printf("%lld\n",sum);

	return 0;
}
