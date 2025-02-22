#include<iostream>
using namespace std;

int main(){
	int x = 4, y = 0, z = 5;
	
	while(x >= 0){
		x--;
		y++;
		z--;
		if(x == y){
			continue;
		} else{
			cout << x << " " << y << " " << z <<endl;
		}
	}
	return 0;
}
