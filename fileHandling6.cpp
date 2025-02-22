//Random access file
//tellg() -> return the current position of get pointer (while read)
//tellp() -> return the current position of put pointer (while write)
//seekg(offset, flag) -> move the get pointer by bytes
//flags -> ios::beg, ios::end, ios::cur

#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin("randomAccessFile.txt"); //open file to read
	
	if(!fin.is_open()){
		cout<<"file opening error..."<<endl;
		return 1;
	}
	
	cout<<"1. current position of pointer : "<<fin.tellg()<<endl;
	
	fin.seekg(3, ios::beg); //move file pointer
	cout<<"2. current position of pointer : "<<fin.tellg()<<endl;
	
	char data[50];
	
	fin.getline(data, 50); //read from file
	cout<<data<<endl;
	
	fin.seekg(0, ios::cur); //set file pointer to eof  
	cout<<"3. current position of pointer : "<<fin.tellg()<<endl;
	
	fin.seekg(-4, ios::cur); //move backwards
	
	if(fin.eof()){
		cout<<"End of file reached"<<endl;
	} else{
		cout<<"eof not yet reached"<<endl;
	}
	
	fin.getline(data, 50);
	cout<<data<<endl;
	
	if(fin.eof()){
		cout<<"End of file now reached!"<<endl;
	}
	
//	cout<<"4. current position of pointer : "<<fin.tellg()<<endl;
	
	fin.close(); //close file
	return 0;
}
