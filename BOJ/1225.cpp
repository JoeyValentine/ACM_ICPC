#include <stdio.h>
#include <string.h>
int main (){
	unsigned long long int sum1=0,sum2=0;
	char A[10001],B[10001];
	int i=0,Alen,Blen;
	scanf("%s %s",A,B);
	Alen = strlen(A);
	Blen = strlen(B);
	for(i=0;i<Alen;i++)
		sum1+=A[i]-'0';
	for(i=0;i<Blen;i++)
		sum2+=B[i]-'0';
	sum1 = sum1*sum2;
	printf("%lld",sum1);
	return 0;
}
