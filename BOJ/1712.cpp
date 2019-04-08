#include <stdio.h>
int main (){
	int A,B,C;
	scanf("%d %d %d",&A,&B,&C);
	if(B>=C) puts("-1");
	else
		printf("%d\n",A/(C-B)+1);
	return 0;
}
