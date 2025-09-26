#include<iostream>
#include<cmath>
using namespace std;
class Rectangle;              //forward declartion 
class Circle{
	private:
		int radius;
		public:
		Circle(int r){
			this->radius =r;
		}
		friend double totalArea(Circle,Rectangle);   //decleration of friend function
};
class Rectangle{
	private:
		int length;
		int width;
		public:
			Rectangle(int length,int width){
				this->length= length;
				this->width= width;
			}
			friend double totalArea(Circle c,Rectangle r);       //decleration of friend function 
};
// defination of friend function 
double totalArea(Circle c,Rectangle r){
	return (3.14* c.radius*c.radius)+(r.length*r.width);
}
int main(){
	Circle c(30);
	Rectangle r( 10,40);
	cout<<"Total area : "<<totalArea(c,r)<<endl;
	return 0;
}







