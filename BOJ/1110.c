#include <stdio.h>

int main (){

	int tempPrev,tempNext,temp,flag=0,original,count=0,input;

	scanf("%d",&input);
	tempPrev = original = temp = input;
	while(1){
		temp = tempPrev/10 + tempPrev%10;
		tempNext = (tempPrev%10) * 10 + temp%10;
		count++;
		if(original == tempNext) break;
		tempPrev = tempNext;
	}

	printf("%d\n",count);

	return 0;
}
