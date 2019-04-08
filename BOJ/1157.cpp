#include <stdio.h>
#include <string.h>
bool isitalone(int* alphabet,int input,int index){
	for(int i=0;i<26;++i)
		if(index!=i && input==alphabet[i]) return false;
	return true;
}
int main (){
	char input[1000001];
	int alphabet[26]={0},i,len,maxindex,maxNum=0;
	scanf("%s",input);
	for(i=0;input[i]!=0;++i){
		if('A'<=input[i] && input[i]<='Z')
			++alphabet[input[i]-'A'];
		else
			++alphabet[input[i]-'a'];
	}
	for(i=0;i<26;++i)
		if(maxNum<alphabet[i]){
			maxNum = alphabet[i];
			maxindex = i;
		}
	if(isitalone(alphabet,maxNum,maxindex)) printf("%c\n",'A'+maxindex);
	else puts("?");
	return 0;
}
