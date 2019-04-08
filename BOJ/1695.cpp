#include <stdio.h>
#include <map>

using namespace std;

int main (){

	int N,input[5000],i,numOfOdd=0;
	map<int,bool> check;
	map<int,int> count;

	scanf("%d",&N);
	for(i=0;i<N;i++)
		scanf("%d",&input[i]);

	for(i=0;i<N;i++){
		count[input[i]]++;
		check[input[i]] = false;
	}

	for(i=0;i<N;i++){
		if(check[input[i]]==false){
			if(count[input[i]]%2==1)
				numOfOdd++;
			check[input[i]]=true;
		}
	}

	if(numOfOdd>1) printf("%d\n",numOfOdd-1);
	else puts("0");

	return 0;
}
