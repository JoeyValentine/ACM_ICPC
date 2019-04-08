#include <stdio.h>
int main (){
	int sum1=0,sum2=0,sum,H,M,S,h,m,s;
	scanf("%d:%d:%d %d:%d:%d",&H,&M,&S,&h,&m,&s);
	sum1=3600*h+60*m+s;
	sum2=3600*H+60*M+S;
	if(sum1>sum2) sum=3600*(h-H)+60*(m-M)+s-S;
	else sum = sum=24*3600-sum2+sum1;
	printf("%02d:%02d:%02d",sum/3600,(sum%3600)/60,sum%60);
	return 0;
}
