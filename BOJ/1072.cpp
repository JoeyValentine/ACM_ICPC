#include <stdio.h>
bool decision(int X,int Y,int Z,int mid){
	if( (int)((long double)(Y+mid)*100/(X+mid)) > Z ) return true;
	else return false;
}
int main (){
	int X,Y,Z,count=0,start,end,mid,ans;
	while(scanf("%d %d",&X,&Y)!=EOF){
		Z = (int)((long double)Y*100/X);
		if(X==Y || Z==99) puts("-1");
		else{
			start=1;end=X;
			while(start<=end){
				mid = (start+end)/2;
				if(decision(X,Y,Z,mid)){ 
					ans = mid;
					end = mid-1;
				}
				else start = mid+1;
			}
			printf("%d\n",ans);
		}
	}
	return 0;
}
