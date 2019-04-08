#include <stdio.h>
#include <math.h>
int main (){
	double diagonal,width,height,k;
	int retH,retW;
	scanf("%lf %lf %lf",&diagonal,&height,&width);
	k = sqrt((diagonal*diagonal)/(height*height+width*width));
	retH = (int)(height*k),retW=(int)(width*k);
	printf("%d %d\n",retH,retW);
	return 0;
}
