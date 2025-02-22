/*
define a class to represent a bank account which includes following members.
Data members - 
1) acholder_name 
2) account_number 
3) account_type 
4) ac_balance

member functions -
a] to assign initial value 
b] to deposite an account 
c] to withdraw an account 
d] to display name, account number, and balance, ac_type

*/
//enhancements can be made
#include<iostream>
#include<iomanip>
using namespace std;

class BankAccount
{
	string ac_name;
	long int ac_number;
	string ac_type;
	float ac_balance;
	
	public:
		BankAccount()
		{
			
		}
		 
		BankAccount(string ac_name, long int ac_number, string ac_type, float ac_balance)
		{
			this->ac_name = ac_name;
			this->ac_number = ac_number;
			this->ac_type = ac_type;
			this->ac_balance = ac_balance;
		}
		
		void diposit(float);
		void withdraw(float);
		void display();	
		static void transaction(BankAccount[], int);
};

void BankAccount::diposit(float amount)
{
	this->ac_balance += amount;
}

void BankAccount::withdraw(float amount)
{
	this->ac_balance -= amount;
}

void BankAccount::display()
{
	cout<<setw(20)<<left<<ac_name<<setw(20)<<left<<ac_number<<
	setw(20)<<left<<ac_type<<setw(20)<<left<<ac_balance<<"\n";
}

void BankAccount::transaction(BankAccount ac[], int n)
{
	//Ask for transaction
	for(int i=0; i<n; i++){
		int op;
		cout<<"\nWant do you want with account "<<i+1<<" ?\n\n";
		cout<<"1. Deposit\n";
		cout<<"2. Withdraw\n";
		cout<<"3. None\n";
		
		cout<<"\nEnter your choice: ";
		cin>>op;
		
		float deposit_amt, withdraw_amt;
		
		switch(op){
			case 1:
				cout<<"\nEnter amount to deposit: ";
				cin>>deposit_amt;
				ac[i].diposit(deposit_amt);
				break;
			case 2:
				cout<<"\nEnter amount to withdraw: ";
				cin>>withdraw_amt;
				ac[i].withdraw(withdraw_amt);
				break;
			case 3:
				break;	
			default:
				cout<<"\nInvalid! Please, choose valid option\n";
				transaction(ac, n);		
		}	
	}
	
}

int main(void)
{
	int n;
	cout<<"How many accounts you want to store? : ";
	cin>>n;
	BankAccount ac[n] = BankAccount();
	
	string ac_name;
	long int ac_number;
	string ac_type;
	float ac_balance;
	
	//Input accounts info
	for(int i=0; i<n; i++){
		cout<<"\n\nEnter Details of Account "<<i+1<<endl;
		cout<<"\nAccount holder name: ";
		cin>>ac_name;
		
		cout<<"Account number: ";
		cin>>ac_number;
		
		cout<<"Account type: ";
		cin>>ac_type;
		
		cout<<"Account balance: ";
		cin>>ac_balance;
		
		ac[i] = BankAccount(ac_name, ac_number, ac_type, ac_balance);
	}
	
	//Display accounts info
	cout<<"\n********************ACCOUNTS DATABASE**********************\n\n";
	cout<<setw(20)<<left<<"\nAccount Holder"<<setw(20)<<left<<"Account Number"<<
	setw(20)<<left<<"Account Type"<<setw(20)<<left<<"Account Balance"<<endl<<endl;
	
	for(int i=0; i<n; i++){
		ac[i].display();
	}
	
	//perform transaction
	BankAccount::transaction(ac, n);
	cout<<endl;
	
	//Display accounts info
	cout<<"\n********************RECORDS UPDATED**********************\n\n";
	cout<<setw(20)<<left<<"\nAccount Holder"<<setw(20)<<left<<"Account Number"<<
	setw(20)<<left<<"Account Type"<<setw(20)<<left<<"Account Balance"<<endl<<endl;
	
	for(int i=0; i<n; i++){
		ac[i].display();
	}
	
	return 0;
}












