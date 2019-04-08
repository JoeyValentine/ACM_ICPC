#include <stdio.h>
int main(){
	int count=0;
	while(scanf("%*s")!=EOF) ++count;
	printf("%d",count);
	return 0;
}
