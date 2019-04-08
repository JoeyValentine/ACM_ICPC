#include <stdio.h>
int main (){
	int N,ans,i,a1,a2,a3;
	scanf("%d",&N);
	if(N<100) ans=N;
	else{
		ans=99;
		for(i=N;i>100;--i){
			a1=N/100;
			a2=(N%100)-(N%10);
			a3=N%10;
			if(2*a2==a1+a2) ++ans;
		}
	}
	printf("%d",ans);
	return 0;
}
