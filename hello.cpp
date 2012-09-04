#include <iostream>
using namespace std;

int Fibonacci (int t){

	int sum = 0;
	int fibseq = 0;
	int a = 0;
	int b = 0;
	if (term <=1)
		return 0;
	for (int i; i<=t; ++i){
	
	fibseq = a+b;
	a=b;
	b=fibseq;
	if(fibseq %2 == 0)
		sum += fibseq;	

	}

	return sum;

}

int main(){

	int fibsum;
	fibsum = sum;
	cout<<fibsum;
	return 0;

}
