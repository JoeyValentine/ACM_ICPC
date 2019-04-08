#include <stdio.h>
int main (){
	int n,a,b,score1=100,score2=100;
	scanf("%d",&n);
	while(n--){
		scanf("%d %d",&a,&b);
		if(a>b)
			score2-=a;
		else if(a<b)
			score1-=b;
	}
	printf("%d %d\n",score1,score2);
}
