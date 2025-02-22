//copy data from one file to another file with modification
#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream fin;
	ofstream fout;
	char ch;
	
	fin.open("abc.txt");
	fout.open("xyz.txt");
	
	if(!fin.is_open())
	{
		cout<<"File opening error.."<<endl;
		exit(1);
	}
	else
	{
		cout<<"File opened successfully"<<endl;
	}
	
	int cnt = 0;
	
	/*
	//using while loop & logical comparision
	
	ch = fin.get();
	while(!fin.eof()){
		if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || 
		ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
		{
			ch = '#';
		}
		fout.put(ch);
		++cnt;
		
		ch = fin.get();
	}
	*/
	
	
	//using do while loop & switch case comparision
	do{
		ch = fin.get();
		
		//check EOF immediately after getting the character
		if(fin.eof())
			break;
			
		switch(ch){
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				ch = '#';
		}
		fout.put(ch);
		++cnt;
	}while(true);
		
	
	cout<<"characters count: " << cnt << endl;
	cout<<"File copied successfully"<<endl;
	
	fin.close();
	fout.close();
	
	return 0;
}
