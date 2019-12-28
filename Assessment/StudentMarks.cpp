#include"iostream"
using namespace std;
class Student {
	int id, psy_marks, hist_marks, lit_marks;
	string name;
	public:
		void SetDetails(int id, string name, int psy_marks, int hist_marks, int lit_marks) {
			this->id = id;
			this->name = name;
			this->psy_marks = psy_marks;
			this->hist_marks = hist_marks;
			this->lit_marks = lit_marks;
		}
		int GetTotal() {
			return psy_marks + hist_marks + lit_marks;	
		}
		double GetAverage() {
			double avg = (psy_marks + hist_marks + lit_marks)/3.0;
			return avg;
		}
		void PrintDetails() {
			cout<<id<<"\t"<<name<<"\t"<<psy_marks<<"\t\t"<<hist_marks<<"\t\t"<<lit_marks<<"\t  "<<GetTotal()<<"\t  "<<GetAverage()<<endl;
		}
};
int main() {
	Student students[3];
	int id, psy_marks, hist_marks, lit_marks;
	string name;
	for(int i = 0; i<3; i++) {
		cout<<"Enter details for Student "<<i+1<<endl;
		cout<<"Enter Student ID: ";
		cin>>id;
		cout<<"Enter Student Name: ";
		cin>>name;
		cout<<"Enter Psychology marks: ";
		cin>>psy_marks;
		cout<<"Enter History marks: ";
		cin>>hist_marks;
		cout<<"Enter English Literature marks: ";
		cin>>lit_marks;
		cout<<endl;
		students[i].SetDetails(id, name, psy_marks, hist_marks, lit_marks);
	}
	cout<<"...................................Student Details................................."<<endl<<endl;
	cout<<"ID\tName \tPsychology_Marks History_marks Eng_Lit_marks Total_marks Average_marks"<<endl;
	for(int i = 0; i<3; i++) {
		students[i].PrintDetails();
	}
}
