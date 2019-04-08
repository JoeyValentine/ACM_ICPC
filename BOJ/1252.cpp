#include <stdio.h>
#include <string.h>
#include <algorithm>
#define swap(x,y) {int temp=x;x=y;y=temp;}
int main (){
	int len1,len2,lenR,i,count01=0,count02=0;
	char input1[81]={0},input2[81]={0},temp[81],result[100]={0};
	scanf("%s %s",input1,input2);
	i=0;
	while(input1[i]=='0')
		++count01,++i;
	i=0;
	while(input2[i]=='0')
		++count02,++i;
	len1=strlen(input1),len2=strlen(input2);
	if(len1==count01 && len2==count02){
		puts("0");
		return 0;
	}
	strcpy(input1,input1+count01);
	strcpy(input2,input2+count02);
	len1=strlen(input1),len2=strlen(input2);
	for(i=len1;i<81;++i) input1[i]=0;
	for(i=len2;i<81;++i) input2[i]=0;
	if(len1<len2){
		strcpy(temp,input1);
		strcpy(input1,input2);
		strcpy(input2,temp);
		swap(len1,len2);
	}
	strcpy(temp,input2);
	for(i=0;i<len2;++i)
		input2[i+len1-len2]=temp[i];
	for(i=0;i<len1-len2;++i)
		input2[i]='0';
	for(i=1;i<=len1;++i){
		if(result[100-i]==0)
			result[100-i] = input1[len1-i] + input2[len1-i] -'0';
		else
			result[100-i] += input1[len1-i] + input2[len1-i] -'0'*2;
		if(result[100-i]>='2') result[99-i] += '1',result[100-i]-=2;
	}
	std::reverse(result,result+100);
	lenR=strlen(result);
	std::reverse(result,result+lenR);
	printf("%s\n",result);
	return 0;
}
