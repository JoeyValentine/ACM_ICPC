#include <stdio.h>
#include <math.h>

int main (){

	int T,x1,y1,x2,y2,r1,r2,i,j,x,y;
	double distance;

	scanf("%d",&T);
	for(i=0;i<T;i++){
		scanf("%d %d %d %d %d %d",&x1,&y1,&r1,&x2,&y2,&r2);
		distance = sqrt( pow(x1-x2,2) + pow(y1-y2,2) );
		if(r1==r2 && x1==x2 && y1==y2 ) puts("-1");
		else if(r1+r2==distance || abs(r1-r2)==distance) puts("1");
		else if(abs(r1-r2) < distance && distance < r1+r2) puts("2");
		else if(r1+r2<distance || abs(r1-r2)>distance) puts("0");
	}

	return 0;
}
