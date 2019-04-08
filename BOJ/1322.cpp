#include <stdio.h>

int main (){

	unsigned long long int Y,X,K,count=0;

	for(X=6 ; X<7; ++X){
		for(K=1 ; K<100; ++K){
			for(Y=1 ; ; ++Y){
				if(X+Y==(X|Y)) count++;
				if(count==K){ 
					printf("%lld + %lld = %lld | %lld\n",X,Y,X,Y);
					break;
				}
			}
			count = 0;
		}
	}
	
	return 0;
}
