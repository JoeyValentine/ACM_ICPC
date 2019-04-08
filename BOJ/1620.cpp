#include <stdio.h>
#include <map>
#include <string>
#include <iostream>

using namespace std;

int cvt(string s){

	int result=0,len,i;

	for(i=0;i<s.size();i++){
		result *= 10;
		result += s[i] - '0';
	}

	return result;
}

int main (){
	
	int N,M,i,index;
	string input;
	map<string,int> mp1;
	map<int,string> mp2;

	scanf("%d %d",&N,&M);
	for(i=1;i<=N;i++){
		cin >> input;
		mp1.insert(pair<string,int>(input,i));
		mp2.insert(pair<int,string>(i,input));
	}

	for(i=1;i<=M;i++){
		cin >> input;
		if( '1'<= input[0] && input[0] <= '9' ){
			index = cvt(input);
			cout << mp2[index] << '\n';
		}
		else if( 'A' <= input[0] && input[0] <= 'Z' )
			cout << mp1[input] << '\n';
	}

	return 0;
}
