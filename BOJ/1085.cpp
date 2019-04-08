#include <stdio.h>
int main (void){
	int x, y ,w ,h, num1, num2, min;
	scanf("%d %d %d %d", &x, &y, &w, &h);
	num1 = (x>w-x) ? w-x : x;
	num2 = (y>h-y) ? h-y : y;
	min = (num1>num2) ? num2 : num1;
	printf("%d\n", min);
	return 0;
}
