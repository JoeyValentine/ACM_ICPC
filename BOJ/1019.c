#include <stdio.h>
#include <math.h>
#define TRUE 1
#define FALSE 0

//this function returns bigger number
int max(int x,int y){
	if(x>y) return x;
	else return y;
}

//this function returns how many times digit appear
int countDigits(int digit, int lowerBound, int upperBound, int inner /* ex)345 is inner of 12345 */) {

	if(upperBound==0)
		return (digit==0) ? 1:0;
	if(lowerBound>0)
		return countDigits(digit,0,upperBound,FALSE)-countDigits(digit,0,lowerBound,FALSE);

	int numLen = (int)log10(upperBound); //figure, ex) 12345's figure is 5
	int msd = (int)((upperBound + 1) / pow(10, numLen)); //most significant digit
	int restOfNum = upperBound - msd * pow(10, numLen); //rest of number

	return
		(max(msd, 1) * numLen * pow(10, numLen-1))	//occurence of digit up to highest of 10
		+ ((digit < msd) ? pow(10, numLen) : 0)	//count occurence of msd above any multiple of highest power of 10
		+ (((restOfNum >= 0) && (numLen > 0)) ? countDigits(digit, 0, restOfNum, TRUE) : 0)	//occurence of any digits in remainder
		+ (((restOfNum >= 0) && (digit == msd)) ? (restOfNum + 1) : 0)	//addition occurence of MSD in remainder
		+ (((restOfNum >= 0) && (digit == 0)) ? countPaddingZeros(numLen, restOfNum) : 0) //count number which contains middle zeros
		- (((digit == 0) && !inner) ? countLeadingZeros(numLen) : 0);	//subtract leading zeros
}

//this functions counts leading zeros
int countLeadingZeros(int numLen) {
	int ret = 0;
	do{
		ret+=pow(10,numLen);
		--numLen;
	}while(numLen>=0);
	return ret;
}

//this functions counts padding zeros, the zeros in middle position
int countPaddingZeros(int numLen, int restOfNum) {
	return (restOfNum + 1) * max(0, numLen - max(0, (int)(log10(restOfNum))) - 1);
}

int main(){

	int ary[10]={0},N,i;

	scanf("%d",&N);
	for(i=0;i<10;++i){
		ary[i]=countDigits(i,0,N,FALSE); //stores the occurence of each digit
		printf("%d ",ary[i]);
	}
	puts("");
	return 0;

}
