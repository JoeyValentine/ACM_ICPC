#include <stdio.h>
#include <string.h>

int main (){

	char file[2501];
	char keyword[51];
	int i=0,fileLen,keywordLen,count=0;

	gets(file);
	gets(keyword);

	fileLen = strlen(file);
	keywordLen = strlen(keyword);

	while(1){
		if( i > fileLen ) break;
		else if( strncmp(file+i,keyword,keywordLen) == 0 ){
			i+= keywordLen;
			count++;
		}
		else i++;
	}

	printf("%d\n",count);

	return 0;
}
