#include<iostream>
using namespace std;
class A{
	public:
		static int count;
		A(){
			count++;
		}
		static void showcount(){
			cout<<"Total object created :"<<count<<endl;
		}
};
int A:: count= 0;
int main(){
	A a1;
	A a2;
	A a3;
	A::showcount();    //calling a static function 
	return 0;
}