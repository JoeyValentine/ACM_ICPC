#include <stdio.h>
int main (){
unsigned long long int N,fileSize[1000],cluster=0,count=0,i;
scanf("%lldd",&N);
for(i=0;i<N;i++) scanf("%lld",&fileSize[i]);
scanf("%lld",&cluster);
for(i=0;i<N;i++){ count+=fileSize[i]/cluster;
if(fileSize[i]%cluster!=0) count++; }
printf("%lld\n",cluster*count); return 0;
}
