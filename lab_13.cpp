// lab - 13
// random file access
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream fout("Demo.txt");
	
	if(!fout.is_open()){
		cerr<<"File opening error..."<<endl;
		return -1;
	}
	
	cout<<"1. current position of file pointer: "<<fout.tellp()<<endl;
	fout<<"Welcome to JSPM"<<endl;
	
	fout.seekp(3, ios::beg);
	cout<<"2. current position of file pointer: "<<fout.tellp()<<endl;
	
	fout.close();
	
	//open to read
	ifstream fin("Demo.txt");
	cout<<"3. current position of file pointer: "<<fin.tellg()<<endl;
	
	fin.seekg(3, ios::beg);
	cout<<"4. current position of file pointer: "<<fin.tellg()<<endl;
	
	string name;
	
	getline(fin, name);
	cout<<endl<<name<<endl;
	
	fin.seekg(0, ios::cur);
	cout<<"\n5. current position of file pointer: "<<fin.tellg()<<endl;
	
	fin.close();
	
	return 0;
}
