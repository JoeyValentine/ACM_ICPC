#include <stdio.h>
#include <math.h>

typedef struct{
	int x;
	int y;
}COMPONENT;

typedef struct{
	int cx;
	int cy;
	int r;
}PSYSTEM;

int main (){

	COMPONENT from,to;
	PSYSTEM input[50];
	int T,n,i,j,count=0;

	scanf("%d",&T);

	for(i=0;i<T;i++){
		scanf("%d %d %d %d",&from.x,&from.y,&to.x,&to.y);
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%d %d %d",&input[j].cx,&input[j].cy,&input[j].r);
		for(j=0;j<n;j++){
			if( pow(from.x-input[j].cx,2) + pow(from.y-input[j].cy,2) < pow(input[j].r,2) &&
					pow(to.x-input[j].cx,2) + pow(to.y-input[j].cy,2) > pow(input[j].r,2)) count++;
			else if( pow(from.x-input[j].cx,2) + pow(from.y-input[j].cy,2) > pow(input[j].r,2) &&
					pow(to.x-input[j].cx,2) + pow(to.y-input[j].cy,2) < pow(input[j].r,2)) count++;
		}
		printf("%d\n",count);
		count=0;
	}

	return 0;
}
