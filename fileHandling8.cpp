#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	fstream f("Integer.txt", ios::out | ios::in | ios::trunc);
	
	if(!f.is_open()){
		cout<<"File opening error...\n";
		return 1;
	}
	cout<<"File opened successfully\n";
	
	int a, b, c;
	cout<<"\nEnter any three integers: ";
	cin>>a>>b>>c;
	
	f<<a<<" "<<b<<" "<<c;
	cout<<"\nData written to file successfully\n";
	cout<<"\ncurrent position of file pointer: "<<f.tellg()<<endl;
	
	f.seekg(0, ios::beg);
	cout<<"\ncurrent position of file pointer: "<<f.tellg()<<endl;
	
	cout<<"\ncontents in file : ";
	int n;
	while(!f.eof()){
		f>>n;
		cout<<n<<" ";
	}
	f.close();
	
	return 0;
}
