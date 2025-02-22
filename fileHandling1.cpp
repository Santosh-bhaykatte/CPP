//write to file then read from it & print no. of words in a file
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout;
	ifstream fin;
	
	fout.open("demoFile3.txt"); 	//open file to write
	
	if(!fout.is_open())
	{
		cout<<"Error in opening file.."<<endl;
		exit(1);
	}
	fout<<"JSPM RSCOE Java C++ Pune";
	cout<<"Data written to file successfully"<<endl;
	
	fout.close(); // close file after writing
	
	fin.open("demoFile3.txt"); //open file to read
	
	if(!fin.is_open())
	{
		cout<<"Error in opening file.."<<endl;
		return 1;
	}
	else
	{
		cout<<"File opened successfully"<<endl;
	}
	
	char str[100];
	int word_cnt = 0;
	
	while(!fin.eof()){
		fin>>str;
		cout<<str<<"\t";
		++word_cnt;
	}
	cout<<"\nTotal no. of words in file : "<<word_cnt<<endl;
	
	fin.close(); //close file after reading
	cout<<"File closed successfully"<<endl;
	return 0;
}
