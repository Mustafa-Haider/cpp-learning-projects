#include <iostream>
using namespace std;

int sum(int,int);
int sub(int,int);
float divi(int,int);
int prod(int,int);
int mod(int,int);
int pow(int,int);

int main(){
	while (true){
		int a,b;
		cout<<"--------------------CALCULATOR--------------------"<<endl;
		int choice;
		cout<<"1. Addition"<<endl;
        	cout<<"2. Subtraction"<<endl;
        	cout<<"3. Multiplication"<<endl;
        	cout<<"4. Division"<<endl;
        	cout<<"5. Modulus"<<endl;
        	cout<<"6. Power"<<endl;
        	cout<<"7. Exit"<<endl;
        cout<<"Enter your choice: ";
        cin>>choice;
		switch (choice){
		case 1:
			cout<<"Enter First Number:";
			cin>>a;
			cout<<"Enter Second Number:";
			cin>>b;
			cout<<"The sum is: "<<sum(a,b)<<endl;
            		break;
		case 2:
			cout<<"Enter First Number:";
			cin>>a;
			cout<<"Enter Second Number:";
			cin>>b;
			cout<<"The difference is: "<<sub(a,b)<<endl;
            		break;
		case 3:
			cout<<"Enter First Number:";
			cin>>a;
			cout<<"Enter Second Number:";
			cin>>b;
			cout<<"The product is: "<<prod(a,b)<<endl;
            		break;
		case 4:
			cout<<"Enter First Number:";
			cin>>a;
			cout<<"Enter Second Number:";
			cin>>b;
			if (b==0){
				cout<<"Division by zero is not possible";
				break;
				}
			else{
				cout<<"The quotient is: "<<divi(a,b)<<endl;
			}
            		break;
		case 5:
			cout<<"Enter First Number:";
			cin>>a;
			cout<<"Enter Second Number:";
			cin>>b;
			if (b==0){
				cout<<"Division by zero is not possible";
				break;
			}
			else{
				cout<<mod(a,b)<<endl;
            	break;
			}
		case 6: {
			cout<<"Enter Number:";
			cin>>a;
			cout<<"Enter Power:";
			cin>>b;
			int c = 1;
			for (int i = 0; i < b; ++i) {
				c = c * a;
			}
			cout << c;
			break;
		}
		case 7:
            break;
			return 0;
        default:
            cout<<"Invalid Choice!"<<endl;
		}
	}
}

int sum(int a, int b){
	return a+b;
}

int sub(int a, int b){
	return a-b;
}

int prod(int a, int b){
	return a*b;
}

float divi(int a, int b){
	return a/b;
}

int mod(int a, int b){
	return a%b;
}
