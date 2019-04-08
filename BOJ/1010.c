#include <stdio.h>
unsigned long long int combination(unsigned long long int n,unsigned long long int m){
	unsigned long long int result=1,i,j,GCD;
	unsigned long long int numerator[100],denominator[100];
	
	for(i=0;i<m;i++)
		numerator[i]=i+n-m+1;
	for(i=0;i<m;i++)
		denominator[i]=i+1;

	for(i=0;i<m;i++){
		for(j=0;j<m;j++){
			if(denominator[j]==1) continue;
			GCD = gcd(numerator[i],denominator[j]);
			if( GCD!=1 && numerator[i]%GCD==0 ){
				numerator[i]/=GCD;
				denominator[j]/=GCD;
			}
			if(numerator[i]==1)
				break;
		}
	}

	for(i=0;i<m;i++)
		result*=numerator[i];

	return result;
}
int gcd(unsigned long long int p,unsigned long long int q){
	if(q==0) return p;
	return gcd(q,p%q);
}
int main (){

	unsigned long long T,N,M,i,j,k,count=0,site[2];
	unsigned long long sum = 0;

	scanf("%lld",&T);

	for(i=0;i<T;i++){
		scanf("%lld %lld",&site[0],&site[1]);
		sum += combination(site[1],site[0]);
		printf("%lld\n",sum);
		sum=0;
	}

	return 0;
}
