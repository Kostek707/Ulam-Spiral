#include <iostream>

using namespace std;

int main(int argc, char const *argv[]){	
	long long range;
	cin >> range;
	
	range++;
	
	bool *primeNumbers;
	primeNumbers = new bool [range];

	for(long long i = 0; i<range; i++){
		bool *pointer = primeNumbers+i;
		*pointer=1;
	}
	bool *pointer = primeNumbers+2;
	for(long long i = 2; i*i <= range; i++){
		if(*pointer){
			bool *pointer2 = primeNumbers+(i*i);
			for(long long j = i*i; j<= range; j+=i){
				*pointer2=false;
				pointer2+=i;
			}
		}
		pointer++;
	}
	primeNumbers[1]=0;
	return 0;
}