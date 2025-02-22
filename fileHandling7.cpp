//write & read from file using single stream object
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
//	fstream f("demoFile5.txt");
	fstream f("demoFile5.txt", ios::out | ios::in | ios::trunc); //open file to write & read
	
	if(!f.is_open()){
		cerr<<"File opening error"<<endl;
		return 1;
	}
	
	f<<"Hello RSCOE, "; //write to file
	f<<"Welcome to JSPM";
	
	f.seekg(0, ios::beg); //set pointer to begining of file
	cout<<"current position of pointer : "<<f.tellg()<<endl;
	
	char data[50];
	
	while(!f.eof()){
		f.getline(data, 50); //read from file
		cout<<data<<endl;
	}
	
	f.seekg(0, ios::cur); //set pointer to current position
	cout<<"current position of pointer : "<<f.tellg()<<endl; //get position of pointer
	
	return 0;
}
