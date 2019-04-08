#include <stdio.h>
int main (){
	int a, b, c, d, e,sum;
	scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
	if(a<40) a = 40;
	if(b<40) b = 40;
	if(c<40) c = 40;
	if(d<40) d = 40;
	if(e<40) e = 40;
	sum = a + b + c + d + e;
	printf("%d\n", sum/5);
	return 0;
}
