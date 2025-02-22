//count total no. lines from an existing file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("demoFile2.txt");
	
	if(!fin.is_open())
	{
		cout<<"File opening error.."<<endl;
		exit(1);
	}
	else
	{
		cout<<"File opened successfully.."<<endl;
	}
	
	char str[100];
	int line_cnt = 0;
	
	while(!fin.eof()){
		fin.getline(str, 100);
		cout<<str<<endl;
		++line_cnt;
	}
	cout<<"Total no. of lines in file : "<<line_cnt<<endl;
	
	fin.close();
	cout<<"File closed.."<<endl;
	
	return 0;
}
