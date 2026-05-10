#include<iostream>
#include<string>
using namespace std;

int balance = 0;
string name = "";
int age = 0;
int pin = 0;
int npin = 0;
int lastDeposit = 0;
int lastWithdraw = 0;
bool accountCreated = false;
int tc=0;


void createAccount() {
	if (accountCreated == true){
		cout<<"Account already created"<<endl;
	}
	else{
		cout<<"enter new pin:"<<endl;
		cin>>pin;
		if (pin<1000 || pin>9999){
			cout<<"Please enter a valid 4 digit pin"<<endl;
			return;
		}
		cout<<"enter your name:"<<endl;
		cin>>name;
		cout<<"enter your age:"<<endl;
		cin>>age;
		if (age<18){
			cout<<"You are a minor"<<endl;
			return;
		}
		else{	
			cout<<"enter your initial deposit";
			cin>>balance;
			if(balance>=500){
				cout<<"Congratulations!! You account is created."<<endl;
				accountCreated = true;
			}
			else{
				cout<<"Your account can't be created. Deposit should be at least 500"<<endl;
			}
		}
	
	}
}

void deposit(){
	int dep;
	if (accountCreated == true){
		cout<<"enter pin:"<<endl;
		cin>>npin;
		if (npin<1000 || npin>9999){
			cout<<"Please enter a valid 4 digit pin"<<endl;
			return;
		}
		if (pin!=npin){
			cout<<"Incorrect pin"<<endl;
			return;
		}
		cout<<"enter your deposit:"<<endl;
		cin>>dep;
		if (dep>0){
			balance= balance + dep;
			lastDeposit =dep;
			tc++;
		}
		else{
			cout<<"Please enter a valid amount"<<endl;
		}
	}
	else{
		cout<<"Please create account"<<endl;
	}
}

  
void withdraw(){
	int amt;
	if (accountCreated == true){
		cout<<"enter pin:"<<endl;
		cin>>npin;
		if (npin<1000 || npin>9999){
			cout<<"Please enter a valid 4 digit pin"<<endl;
			return;
		}
		if (pin!=npin){
			cout<<"Incorrect pin"<<endl;
			return;
		}
		cout<<"enter your amount :"<<endl;
		cin>>amt;
		if ((balance-amt)<500){
			cout<<"Minimum balance of 500 must remain:"<<endl;
		}
		else {
			cout<<amt<<" is withdrawn. Balance="<<balance-amt<<endl;
			balance=balance-amt;
			lastWithdraw = amt;
			tc++;
		}
	}
	else{
		cout<<"Please create account"<<endl;
	}
}


void checkBalance(){	
	if (accountCreated == true){
		cout<<"enter pin:"<<endl;
		cin>>npin;
		if (npin<1000 || npin>9999){
			cout<<"Please enter a valid 4 digit pin"<<endl;
			return;
		}
		if (pin!=npin){
			cout<<"Incorrect pin"<<endl;
			return;
		}
		cout<<"Your Balance="<<balance<<endl;
	}
	else{
		cout<<"Please create account"<<endl;
	}
}


void showDetails(){
	if (accountCreated == true){
		cout<<"enter pin:"<<endl;
		cin>>npin;
		if (npin<1000 || npin>9999){
			cout<<"Please enter a valid 4 digit pin"<<endl;
			return;
		}
		if (pin!=npin){
			cout<<"Incorrect pin"<<endl;
			return;
		}
		cout<<"Your Name="<<name<<endl;
		cout<<"Your Age="<<age<<endl;
		cout<<"Your Balance="<<balance<<endl;
		cout<<"Total Transactions="<<tc<<endl;
	}
	else{
		cout<<"Please create account"<<endl;
	}
}



void transactionHistory(){
	if (accountCreated == true){
		cout<<"enter pin:"<<endl;
		cin>>npin;
		if (npin<1000 || npin>9999){
			cout<<"Please enter a valid 4 digit pin"<<endl;
			return;
		}
		if (pin!=npin){
			cout<<"Incorrect pin"<<endl;
			return;
		}
		cout<<"Last Withdraw:"<<lastWithdraw<<endl;
		cout<<"Last Deposit:"<<lastDeposit<<endl;
	}
	else{
		cout<<"Please create account"<<endl;
	}
}



int main(){
	while (true){
		cout<<"--------------------BANK MANAGEMENT SYSTEM--------------------"<< endl;;
		int choice;
		cout<<"1. Create Account"<<endl;
        	cout<<"2. Deposit Money"<<endl;
        	cout<<"3. Withdraw Money"<<endl;
        	cout<<"4. Check Balance"<<endl;
        	cout<<"5. Account Details"<<endl;
        	cout<<"6. Transaction History (basic)"<<endl;
        	cout<<"7. Exit"<<endl;
			cin>>choice;
		switch (choice){
		case 1:
			createAccount();
            break;
		case 2:
			deposit();
            break;
		case 3:
			withdraw();
            break;
		case 4:
			checkBalance();
            break;
		case 5:
			showDetails();
            break;
		case 6:
			transactionHistory();
            break;
		case 7:
			return 0;
		default:
    		cout<<"Invalid choice"<<endl;
		}
	}
	return 0;
}






















