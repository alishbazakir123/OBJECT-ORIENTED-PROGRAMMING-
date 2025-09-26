#include<iostream>
using namespace std;
class Calculator{
	float num1;
	float num2;
	public:
		void setnumber(){
			cout<<"enter first number :"<<endl;
			cin>>num1;
			cout<<"enter second number :"<<endl;
			
		}
		float add(){
			return num1+num2;
		}
		float subtract(){
			return num1-num2;
		}
		float multiplay(){
			return num1*num2;
		}
		float division(){
			if(num2!=0){
			return	num1/num2;
			}
			else{
			cout<<"Invalid "<<endl;
			}
		}
};