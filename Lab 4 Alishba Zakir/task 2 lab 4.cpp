//#include<iostream>
//using namespace std;
//class Person{
//	public:
//		string name;
//		int age;
//		void displayperson(){
//			cout<<"Name : "<<name<<endl;
//			cout<<"Age : "<<age<<endl;
//		}
//};
//class Employee:public Person{
//	public:
//		string employeeid;
//		void displayemployee(){
//			displayperson();
//			cout<<"Employee id "<<employeeid;
//			
//		}
//};
//class Manager: public Employee{
//	public:
//		string department;
//		void displaymanager(){
//			displayemployee();
//			cout<<"Department :"<<department<<endl;
//		}
//};
//int main(){
//	Manager m1;
//	m1.name ="Ali";
//	m1.age=12;
//	m1.employeeid="ali123";
//	m1.department="AI";
//	m1.displaymanager();
//}