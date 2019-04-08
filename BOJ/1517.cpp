#include <stdio.h>
#define INF 987654321
#define max(x,y) x>y ? x:y
int A[500001];
int tree[2000000];
int count = 0;
void build_tree(int node,int a,int b){
	if(a>b) return;
	if(a==b){
		tree[node]=A[a];
		return;
	}
	build_tree(node*2,a,(a+b)/2);
	build_tree(node*2+1,1+(a+b)/2,b);
	tree[node]=max(tree[node*2],tree[node*2+1]);
}
int queru_tree(int node,int a,int b,int i,int j){
	if(a>b||a>j||b<i) return -INF;
	if(a>=i&&b<=j) return tree[node];
	int q1 = queru_tree(node*2,a,(a+b)/2,i,j);
	int q2 = queru_tree(1+node*2,1+(a+b)/2,b,i,j);
	int res = max(q1,q2);
	if(q1>q2)
		++count;
	return res;
}
int main (){
	int N,i;
	scanf("%d",&N);
	for(i=0;i<N;++i) scanf("%d",&A[i]);
	build_tree(1,0,N-1);
	queru_tree(1,0,N-1,0,N-1);
	printf("%d\n",count);
	return 0;
}
