#include<iostream>
#include<cmath>
using namespace std;
class Shape{
	public:
		virtual double area(){
			return 0;
		}
};
class Rectangle : public Shape{
	private:
		double width,height;
		public:
			Rectangle(double w,double h){
				width = w;
				height = h;
			}
			double area() override{
				return width*height;
			}
};
class Circle : public Shape{
	private:
		double radius;
		public:
			Circle(double r){
			radius = r;
			}
			double area() override{
				return  3.14159 *radius* radius;
			}
	};
int main(){
	Shape*s1= new Rectangle(5,3);
	Shape*s2= new Circle(2);
	cout<<"Rectangle area :"<<s1->area()<<endl;
	cout<<"Circle area :"<<s2->area()<<endl;
	return 0;
	
}	
	
	
	
	
	
	
	
	
	