#include <stdio.h>
#define min(x,y) (x>y ? y:x)
bool decision(long long N,int L,int W,int H,long double mid){
	long long count=(long long)(L/mid)*(long long)(W/mid)*(long long)(H/mid);
	if(count>=N) return true;
	else return false;
}
int main (){
	long long N;
	int L,W,H;
	long double start,end,mid,A;
	scanf("%lld %d %d %d",&N,&L,&W,&H);
	start = 0; end = min(L,min(W,H));
	for(int i=0;i<1000;++i){
		mid = (start+end)/2;
		if(decision(N,L,W,H,mid)){
			A = mid;
			start = mid;
		}
		else end = mid;
	}
	printf("%.10Lf\n",A);
	return 0;
}
