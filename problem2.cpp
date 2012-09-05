#include <iostream>
using namespace std;

int Fibonacci(int);
int Fibonacci (int t){
	int sum = 0;
	int fibseq = 1;
	int a = 1;
	int b = 1;
	if ( t <= 1)
		return 0;	
	while (fibseq<=4000000){
	
	fibseq = a+b;
	a=b;
	b=fibseq;
	if(fibseq %2 == 0 &&  fibseq<=4000000)
		sum += fibseq;	

	}

	return sum;

}

int main(){

	int fibsum;
	fibsum = Fibonacci(1000);
	cout<<fibsum<<endl;
	return 0;

}
