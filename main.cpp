#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[]){	
	long long range;
	long long width;
	cin >> width;
	
	range=(width*width)+1;
	
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
				*pointer2=0;
				pointer2+=i;
			}
		}
		pointer++;
	}

	primeNumbers[1]=0;

	bool spiral [width][width];
	pair <int,int> point;

	if(width%2==1) point = make_pair(width/2,width/2);
	else if(width==1) point = make_pair(0,0);
	else point = make_pair((width/2)-1,(width/2)-1);

	long long state = 0;
	primeNumbers++;
	int spiralCount = 1;
	int spiralCounter = 1;
	for(int i = 1; i < range; i++){
		spiral[point.first][point.second]=*primeNumbers;
		
		spiralCounter--;
		if(spiralCounter==0&&(state%4==1||state%4==3)) spiralCount++;
		
		if(state%4==0) point.second++;
		else if(state%4==1) point.first++; 
		else if(state%4==2)	point.second--;
		else point.first--;

		if(!spiralCounter) {spiralCounter=spiralCount; state++;}
		primeNumbers++;
	}

	for(int i = 0; i<width; i++){
		for(int j = 0; j<width; j++){
			cout << spiral[j][i] << " ";
		}
		cout << "\n";
	}
	
	return 0;
}