#include <stdio.h>

int main (){

	char input;
	int inputTemp,ary[3],i,flag=0;

	while(1){
		scanf("%c",&input);
		if(input!='\n'){
			inputTemp = input - '0';
			for(i=0;i<3;i++){
				ary[i] = inputTemp%2;
				inputTemp/=2;
			}
			if(flag==0){

				flag = 1;
				
				if(ary[2]==0){
					if(ary[1]==0)
						printf("%d",ary[0]);
					else
						printf("%d%d",ary[1],ary[0]);	
				}
				else
					printf("%d%d%d",ary[2],ary[1],ary[0]);	
			}	
			else
				printf("%d%d%d",ary[2],ary[1],ary[0]);
		}
		else break;
	}
	puts("");

	return 0;
}
