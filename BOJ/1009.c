#include <stdio.h>

int main (){

	int ary[3];
	int N,i,j;

	scanf("%d",&N);

	for(i=0;i<N;i++){
		scanf("%d %d",&ary[0],&ary[1]);
		if(ary[0]%10==0)
			ary[2]=10;
		else if(ary[0]%10==1)
			ary[2]=1;
		else if(ary[0]%10==2){
			if(ary[1]%4==1)
				ary[2] = 2;
			else if(ary[1]%4==2)
				ary[2] = 4;
			else if(ary[1]%4==3)
				ary[2] = 8;
			else
				ary[2] = 6;
		}
		else if(ary[0]%10==3){
			if(ary[1]%4==1)
				ary[2] = 3;
			else if(ary[1]%4==2)
				ary[2] = 9;
			else if(ary[1]%4==3)
				ary[2] = 7;
			else
				ary[2] = 1;
		}
		else if(ary[0]%10==4){
			if(ary[1]%2==1)
				ary[2] = 4;
			else
				ary[2] = 6;
		}
		else if(ary[0]%10==5)
			ary[2] = 5;
		else if(ary[0]%10==6)
			ary[2] = 6;
		else if(ary[0]%10==7){
			if(ary[1]%4==1)
				ary[2] = 7;
			else if(ary[1]%4==2)
				ary[2] = 9;
			else if(ary[1]%4==3)
				ary[2] = 3;
			else
				ary[2] = 1;
		}
		else if(ary[0]%10==8){
			if(ary[1]%4==1)
				ary[2] = 8;
			else if(ary[1]%4==2)
				ary[2] = 4;
			else if(ary[1]%4==3)
				ary[2] = 2;
			else
				ary[2] = 6;
		}
		else if(ary[0]%10==9){
			if(ary[1]%2==1)
				ary[2] = 9;
			else
				ary[2] = 1;
		}
		printf("%d\n",ary[2]);
	}

	return 0;
}
