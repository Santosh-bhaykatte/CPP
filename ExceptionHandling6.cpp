// what() method with additional data
#include<iostream>
#include<exception>
using namespace std;

class CustomException : public exception {
	string message;
	int errorcode;
	public:
		CustomException(const string& msg, int code) : message(msg) : errorcode(code){
		}
		const char* what() const noexcept{
			return message.c_str();
		}
		int getErrorcode const (){
			return errorcode;
		}
};

int main()
{
	try{
		throw CustomException("File Not Found", 404);
	} catch(const CustomException &e){
		cout<<"Exception caught: "<<e.what()<<" (Error code: "<<e.getErrorcode<<")"<<endl;
	}
	
	return 0;
}
