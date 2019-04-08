#include <iostream>
#include <string>
#include <map>
#define max(x,y) x>y ? x:y
using namespace std;
int main (){
	int N,maxCount=-987654321;
	map <string,int> book;
	string input;
	cin>>N;
	while(N--){
		cin>>input;
		++book[input];
		maxCount = max(maxCount,book[input]);
	}
	std::map<string,int>::iterator it = book.begin();
	for(;it!=book.end();++it)
		if((it->second)==maxCount){
			cout<<it->first;
			break;
		}
	return 0;
}
