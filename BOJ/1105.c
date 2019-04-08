#include <stdio.h>
#include <string.h>
int main (){
	int lenL,lenR,i,result=0;
	char L[11],R[11];
	scanf("%s %s",L,R);
	lenL = strlen(L); lenR = strlen(R);
	for(i=0;i<lenL;i++){
		if(L[i] == '8' && R[i] == '8') result++;
		else if(L[i]==R[i]) continue;
		else break;
	}
	if(lenR>lenL) result = 0;
	printf("%d\n",result);
	return 0;
}
