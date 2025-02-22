#include<iostream>
using namespace std;

int main()
{
	int bedLength, n, cnt = 0;
	
	cout<<"Enter flowerbed length: ";
	cin>>bedLength;
	
	int flowerbed[bedLength];
	
	cout<<"Input values [1 -> flower & 0 -> empty]: ";
	for(int i=0; i<bedLength; i++){
		cin>>flowerbed[i];
	}
	
	cout<<"Enter n: ";
	cin>>n;
	
	for(int i=1; i<bedLength; i++){
		if(!flowerbed[i] && !flowerbed[i-1] && !flowerbed[i+1]){
			++cnt;
		}
	}
	if(n <= cnt) cout<<"true";
	else         cout<<"false";
}
