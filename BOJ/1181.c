#include <stdio.h>
#include <string.h>
#include <stdlib.h>
int compare1(const void *args1,const void *args2){
	int len1=strlen((char*)args1),len2=strlen((char*)args2);
	if(len1>=len2) return 1;
	else if(len1<len2) return 0;
}
int compare2(const void *args1,const void *args2){
	int result = strcmp((char*)args1,(char*)args2);
	int len1=strlen((char*)args1),len2=strlen((char*)args2);
	if(len1==len2 && result>0) return 1;
	else if(len1==len2 && result<0) return -1;
	else return 0;
}
int main (){
	char ary[20000][51];
	char temp[51];
	char enter;
	int i,j,N;
	scanf("%d%c",&N,&enter);
	for(i=0;i<N;i++)
		gets(ary[i]);
	qsort(ary,N,sizeof(ary[0]),compare1);
	qsort(ary,N,sizeof(ary[0]),compare2);
	for(i=0;i<N;i++){
		if( strcmp(ary[i],ary[i-1]) != 0)
			printf("%s\n",ary[i]);
	}
	return 0;
}
