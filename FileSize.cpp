//size of current file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin("FileSize.txt"); //open file to read
	
	fin.seekg(0, ios::end); //set file pointer to end of file
	int size = fin.tellg(); //get position of file pointer
	
	cout<<"size of current file : "<<size<<" bytes"<<endl;
	return 0;
}
