#include "iostream"
using namespace std;

class Person {
	string name;
	int age;
	char gender;
	public:
		void SetPersonInfo(string name, int age, char gender) {
			this->name = name;
			this->age = age;
			this->gender = gender;
		}
		void GetPersonInfo() {
			cout<<name<<endl;
			cout<<age<<endl;
			cout<<gender<<endl;
		}
};

class Employee : public Person {
	int empid;
	double salary = 40000;
	string department;
	public:	
		
		void SetEmployeeInfo(int empid, string department) {
			this->empid = empid;
			this->department = department;
		}
		int GetEmployeeSalary() {
			return salary;
		}
		void GetEmployeeInfo() {
			cout<<empid<<endl;
			cout<<department<<endl;
		}
};

class Manager : public Employee {
	int mngrid;
	double salary;
	public:
		void SetManagerInfo(string name, int age, char gender, int empid, string department, int mngrid) {
			Person::SetPersonInfo(name, age, gender);
			Employee::SetEmployeeInfo(empid, department);
			this->mngrid = mngrid;
			Employee e;
			salary = e.GetEmployeeSalary()*2.5;
		}
		void GetManagerInfo() {
			Person::GetPersonInfo();
			Employee::GetEmployeeInfo();
			cout<<mngrid<<endl;
			cout<<salary<<endl;
		}
};
int main() {
	Manager manager;
	int age, empid, mngrid;
	string name, department;
	char gender;
	double salary;
	cout<<"Enter name, age, gender, empid, department, mngrid: "<<endl;
	cin>>name;
	cin>>age;
	cin>>gender;
	cin>>empid;
	cin>>department;
	cin>>mngrid;
	//manager.SetPersonInfo(name, age, gender);
	//manager.SetEmployeeInfo(empid, department);
	manager.SetManagerInfo(name, age, gender, empid, department, mngrid);
	//manager.GetPersonInfo();
	//manager.GetEmployeeInfo();
	manager.GetManagerInfo();
}
