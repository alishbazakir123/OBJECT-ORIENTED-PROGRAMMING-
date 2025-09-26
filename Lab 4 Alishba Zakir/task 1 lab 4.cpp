#include<iostream>
using namespace std;
class Person{
	public:
		string name;
		int age;
			void displaypersoninfo(){
				cout<<"Personal Information "<<endl;
				cout<<"Name "<<name<<endl;
				cout<<"Age "<<age<<endl;
			}
};
class Student : public Person{
	public:
		string studentid;
		void displaystudentinfo(){
			displaypersoninfo();
			cout<<"Student id "<<studentid<<endl;
			
		}
};
int main(){
	Student s;
	cout<<"Enter student name ";
		cin>> s.name;
	cout<<"Enter student age :";
	cin>> s.age;
	cout<<"Enter strudent id :";
	cin>>s.studentid;	
	s.displaypersoninfo();
	s.displaystudentinfo();
	return  0;
}
