#include <stdio.h>
#include <string.h>

int main (){

	int N,i,j,k,l,count=0,flag=1,len,result=0;
	char input[100][101],temp;

	scanf("%d%c",&N,&temp);

	for(i=0;i<N;i++)
		gets(input[i]);

	for(i=0;i<N;i++){
		len = strlen(input[i]);
		for(k=0;k<len;k++){
			for(j=0;j<26;j++){
				if( input[i][k] == 'a'+ j ){
					for(l=k+1;l<len;l++){
						if( input[i][l] == 'a'+j && input[i][l-1] != 'a'+j ){
							flag = 0;
							break;
						}
					}
				}
				if(flag==0) break;
			}
			if(flag==0) break;
		}	
		if(flag==0) flag = 1;
		else count++;
	}

	printf("%d\n",count);

	return 0;
}
