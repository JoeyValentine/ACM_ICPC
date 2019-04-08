#include <stdio.h>
#include <string.h>
int main (){
	int len,i,flen;
	char input[1000001],result[333344]={0};
	scanf("%s",input);
	len = strlen(input);flen=len/3;
	if(len%3==0)
		for(i=0;i<flen;++i)
			result[i] = (input[3*i]-'0')*4+(input[3*i+1]-'0')*2+input[3*i+2];
	else if(len%3==1){
		result[0] = input[0];
		for(i=1;i<=flen;++i)
			result[i] = (input[3*(i-1)+1]-'0')*4+(input[3*(i-1)+2]-'0')*2+input[3*(i-1)+3];
	}
	else{
		result[0] = (input[0]-'0')*2+input[1];
		for(i=1;i<=flen;++i)
			result[i] = (input[3*(i-1)+2]-'0')*4+(input[3*(i-1)+3]-'0')*2+input[3*(i-1)+4];
	}
	printf("%s\n",result);
	return 0;
}
