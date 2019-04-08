#include <stdio.h>
#include <stdlib.h>

int compare1(const void* args1,const void* args2){
	if(*(int*)args1 > *(int*)args2) return 1;
	else if(*(int*)args1 < *(int*)args2) return -1;
	else return 0;
}
int compare2(const void* args1,const void* args2){
	if(*(int*)args1 < *(int*)args2) return 1;
	else if(*(int*)args1 > *(int*)args2) return -1;
	else return 0;
}
int main (){

	int n,A[50],B[50],i,s=0;

	scanf("%d",&n);

	for(i=0;i<n;i++)
		scanf("%d",&A[i]);

	for(i=0;i<n;i++)
		scanf("%d",&B[i]);

	qsort(A,n,sizeof(int),compare1);
	qsort(B,n,sizeof(int),compare2);

	for(i=0;i<n;i++)
		s+=A[i]*B[i];
	
	printf("%d\n",s);

	return 0;
}
