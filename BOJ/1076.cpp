#include <stdio.h>
#include <math.h>
#include <string.h>
int main (){
	long long ans=0;
	char input[3][7];
	scanf("%s %s %s",input[0],input[1],input[2]);
	for(int i=0;i<3;++i){
		if(strcmp(input[i],black)==0){
			ans+=0;
			if(i==2)
				ans*=pow(10,1);
		}
		else if(strcmp(input[i],brown)==0){
			ans+=1;
		}
		else if(strcmp(input[i],red)==0){

		}
		else if(strcmp(input[i],orange)==0)
		else if(strcmp(input[i],yellow)==0)
		else if(strcmp(input[i],green)==0)
		else if(strcmp(input[i],blue)==0)
		else if(strcmp(input[i],violet)==0)
		else if(strcmp(input[i],grey)==0)
		else if(strcmp(input[i],white)==0)
	}
	return 0;
}
