//write to file then read from file & print total no. of lines
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	ifstream fin;
	
	fout.open("demoFile4.txt"); //open file to write
	
	if(!fout.is_open())
	{
		cout<<"File opening error..."<<endl;
		exit(1);
	}
	cout<<"File opened successfully for writing..."<<endl;
	fout<<"Welcome to JSPM RSCOE"<<endl;
	
	char str1[100];
	int choice;
	
	//loop to take input from user & append into file 
	do{
		cout<<"\nEnter sentence: ";
		cin.getline(str1, 100);
		
		fout<<str1<<endl;
		
		cout<<"\nWant to continue? press 1 else 0 : ";
		cin>>choice;
		
		cin.ignore(); //clear input buffer
	}while(choice);
	
	fout.close(); //close file after writing
	cout<<"\nFile closed successfully after writing"<<endl;
	
	cout<<"\n----------------------------------------------\n";
	
	fin.open("demoFile4.txt"); //open file to read
	
	if(!fin.is_open())
	{
		cout<<"File opening error..."<<endl;
		exit(1);
	}
	cout<<"\nFile opened successfully for reading..."<<endl<<endl;
	
	char str2[100];
	int line_cnt = 0;
	
	while(fin.getline(str2, 100)){ //automatically exit from loop after EOF reached 
		cout<<str2<<endl;
		++line_cnt;
	}
	cout<<"\nTotal no. of lines : "<<line_cnt<<endl;
	
	fin.close(); //close file after reading
	cout<<"\nFile closed successfully after reading.."<<endl;
	
	return 0;
}
