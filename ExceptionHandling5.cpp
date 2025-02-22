//custom exception
/* virtual const char* what() const noexcept{
		
}
member function of exception class & all it's derived classes

# used to get descriptive error message for an exception occurred
*/

#include<iostream>
#include<exception>
#include<stdexcept>
using namespace std;

class CustomException : public exception{
	public:
		const char* what() const noexcept {
			return "Custom exception occured!";
		}
};

int main()
{
	try{
		throw CustomException();
	} catch(const CustomException &e){
		cout<<"Caught: "<<e.what()<<endl;
	}
	
	return 0;
}
