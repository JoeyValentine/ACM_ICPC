#include <stdio.h>

int main (){
	int N,i;
	int time_of_conversation[20];
	int temp;
	int Y_charge = 0;
	int M_charge = 0;

	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&time_of_conversation[i]);
	for(i=0;i<N;i++){
		temp = time_of_conversation[i];
		if(temp == 0)
			continue;
		else{
			Y_charge += 10;
			M_charge += 15;
		}
		Y_charge += (temp/30) * 10;
		M_charge += (temp/60) * 15;
	}

	if(M_charge == Y_charge)
		printf("Y M %d\n",M_charge);
	else if(M_charge > Y_charge)
		printf("Y %d\n",Y_charge);
	else
		printf("M %d\n",M_charge);

	return 0;
}
