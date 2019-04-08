#include <stdio.h>
int main (){
	char temp;
	int scoreA=0,scoreB=0,V;
	scanf("%d%*c",&V);
	while(V--){ 
		scanf("%c",&temp);
		if(temp=='A') scoreA++;
		else if(temp=='B') scoreB++;
	}
	if(scoreA>scoreB) puts("A");
	else if(scoreA<scoreB) puts("B");
	else puts("Tie");
	return 0;
}
