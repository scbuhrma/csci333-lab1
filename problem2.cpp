#include <iostream>
using namespace std;

long Fibonacci(long);
long Fibonacci (long t){

	long sum = 0;
	long fibseq = 0;
	long a = 0;
	long b = 1;
	if ( t <= 1)
		return 0;	
	for (long i; i<=t; ++i){
	
	fibseq = a+b;
	a=b;
	b=fibseq;
	if(fibseq %2 == 0)
		sum += fibseq;	

	}

	return sum;

}

int main(){

	long fibsum;
	fibsum = Fibonacci(1000);
	cout<<fibsum<<endl;
	return 0;

}
