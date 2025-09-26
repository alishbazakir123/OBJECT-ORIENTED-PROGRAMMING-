#include<iostream>
using namespace std;
class Voter{
//     Access specifier
	private:
//artibute
	string name;
	int age;
	public:
	void setdata();
	 bool iseligible();
	
};
void Voter::setdata(){
	cout<<"Enter name : ";
	cin>>name;
	cout<<"Enter age : ";
	cin>>age;
}
 bool Voter::iseligible(){
   return age>18;
   };