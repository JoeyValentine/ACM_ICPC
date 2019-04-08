#include <stdio.h>
#include <string.h>
#define swap(x,y) {char temp=y;y=x;x=temp;}
int main (){
	char input[11];
	int i,j,len;
	scanf("%s",input);
	len = strlen(input);
	for(i=0;i<len-1;++i)
		for(j=0;j<len-i-1;++j)
			if(input[j]<input[j+1])
				swap(input[j],input[j+1])
	printf("%s\n",input);
	return 0;
}
