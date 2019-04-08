#include <stdio.h>
int main (){
	int T;
	int Ks=0,Ys=0,Yi,Ki;
	scanf("%d",&T);
	while(T--){
		for(int i=0;i<9;++i){
			scanf("%d %d",&Yi,&Ki);
			Ys+=Yi,Ks+=Ki;
		}
		if(Ys>Ks) puts("Yonsei");
		else if(Ys<Ks) puts("Korea");
		else puts("Draw");
		Ys=0,Ks=0;
	}
	return 0;
}
