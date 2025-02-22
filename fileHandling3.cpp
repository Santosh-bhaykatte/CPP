//count no. of words in an existing file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	
	fin.open("demoFile1.txt");
	
	if(!fin.is_open())
	{
		cout<<"Error in opening file.."<<endl;
	}
	
	char str[100];
	int word_cnt = 0;
	
	while(!fin.eof()){
		fin>>str;
		cout<<str<<"\t";
		++word_cnt;
	}
	cout<<"\nTotal no. of words in file : "<<word_cnt<<endl;
	
	fin.close();
	cout<<"File closed successfully"<<endl;
	return 0;
}
