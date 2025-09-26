
//      Exception Handling 
#include<iostream>
#include<stdexcept>
using namespace std;
int main()
{
	try{
		int numerator, denomenator;
	cout<<"Enter numerator: ";
	cin>>numerator;
	cout<<"Enter denomenator: ";
	cin>>denomenator;
	if(denomenator==0){
		throw 0;
	}
	double divide=numerator/denomenator;
	cout<<divide<<endl;}
	catch(int value){
		cout<<"Division by 0 not defined"<<endl;
	}
return 0;
}