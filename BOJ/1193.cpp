#include <stdio.h>
int main (){
	int X,n,i;
	scanf("%d",&X);
	for(n=1;;++n)
		if((n-1)*n/2<=X && X<=n*(n+1)/2)
			break;
	for(i=1;;++i)
		if(i+n*(n-1)/2==X)
			if(n%2==1){
				printf("%d/%d\n",n-i+1,i);
				break;
			}
			else{ 
				printf("%d/%d\n",i,n-i+1);
				break;
			}
	return 0;
}
