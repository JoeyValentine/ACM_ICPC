#include <stdio.h>

int main (){

	int arr[1000001],i,j,N;

	arr[1] = 0; arr[2] = 1; arr[3] = 1;

	for(i=4;i<1000001;i++){
		if(i%3==0 && i%2==0 || i%3==0) arr[i] = arr[i/3] + 1;
		else if(i%2==0) arr[i] = arr[i/2] + 1;
		else arr[i] = arr[i-1] + 1;
	}

	scanf("%d",&N);

	printf("%d\n",arr[N]);

	return 0;
}
