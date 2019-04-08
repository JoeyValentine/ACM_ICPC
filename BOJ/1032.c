#include <stdio.h>
#include <string.h>

int main (){
	int i,j,N,len,onOff[50]={0},flag=0;
	char inputString[50][51]={0};

	scanf("%d%*c",&N);

	for(i=0;i<N;i++)
		gets(inputString[i]);

	len = strlen(inputString[0]);

	for(j=0;j<len;j++){
		for(i=1;i<N;i++){
			if(inputString[i-1][j]!=inputString[i][j]){ 
				flag = 1;
				break;
			}
		}
		if(flag==0)
			onOff[j]=1;
		flag = 0;
	}

	for(i=0;i<len;i++){
		if(onOff[i]==0)
			inputString[0][i] = '?';
	}

	printf("%s\n",inputString[0]);

	return 0;
}
