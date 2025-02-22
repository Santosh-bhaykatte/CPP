// rand() generates random number between 0 to RAND_MAX (32767)
#include<iostream>
#include<cstdlib>
using namespace std;

int main(){
	int randNum = rand() % 100 + 1;
	int guess;
	
	cout<<"Guess a number between 1 to 100: ";
	do{
		cin>>guess;
		
		if(guess < randNum){
			cout<<"Too low"<<endl<<endl;
			cout<<"Guess again: ";
		} else if(guess > randNum){
			cout<<"Too high"<<endl<<endl;
			cout<<"Guess again: ";
		}
	}while(guess != randNum);
	
	cout<<"correct!"<< endl;
	
	return 0;
}
