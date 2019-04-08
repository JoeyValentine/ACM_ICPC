#include <stdio.h>

int main (){

	char chessBoard[8][9]={0},enter;
	int i,j,count=0;

	for(i=0;i<8;i++){
		for(j=0;j<8;j++){
			scanf("%c",&chessBoard[i][j]);
			if( chessBoard[i][j] == 'F' && i%2==0 && j%2==0 || 
					chessBoard[i][j] == 'F' && i%2==1 && j%2==1){
				count++;
			}
		}
		scanf("%c",&enter);
	}

	printf("%d\n",count);

	return 0;
}
