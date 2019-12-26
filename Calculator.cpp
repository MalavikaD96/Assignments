#include "iostream";
using namespace std;

class Calculator {
	
	int num1, num2;
	public:
		Calculator() {
		}
		
		Calculator(int num1, int num2) {
			this->num1 = num1;
			this->num2 = num2;
		}
		
		void SetNumbers() {
				cout<<"\nEnter 2 numbers: ";
				cin>>num1;
				cin>>num2;
		}
			
		public:
			
			int Addition() {
				SetNumbers();
				cout << "Addition of "<<num1<<" and "<<num2<<" : ";
				return num1+num2;
			}
			
			int Subtraction() {
				SetNumbers();
				cout << "Subtraction of "<<num1<<" and "<<num2<<" : ";
				return num1-num2;
			}
			
			int Multiplication() {
				SetNumbers();
				cout << "Multiplication of "<<num1<<" and "<<num2<<" : ";
				return num1*num2;
			}
			
			double Division() {
				SetNumbers();
				cout << "Division of "<<num1<<" and "<<num2<<" : ";
				return (double)num1/num2;
			}
};

int main() {
	Calculator calculator;
	char choice;
	while(choice!='0') {
		cout<<"\nSelect the appropriate symbol for your choice of operation. Enter 0 to exit.\n";
		cout<<"Addition: +\nSubtraction: -\nMultiplication: *\nDivision: /\nExit: 0\n";
		cin>>choice;
		switch(choice) {
			case '+':
				cout<<calculator.Addition()<<endl;
				break;
			case '-':
				cout<<calculator.Subtraction()<<endl;
				break;	
			case '*':
				cout<<calculator.Multiplication()<<endl;
				break;
			case '/':
				cout<<calculator.Division()<<endl;
				break;
			case '0':
				exit(0);
			default:
				cout<<"Wrong option. Select again.";
				break;
		}
	}
	
}
