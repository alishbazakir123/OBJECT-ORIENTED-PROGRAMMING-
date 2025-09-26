#include<iostream>
#include<string>
#include"student.h"
#include"Rectangle.h"
#include"Voter.h"
#include"Temprature.h"
#include"Calculator.h"
#include"Product.h"

using namespace std;

//                    Task1: Student Record system
//
//int main(){
//	Student std;
////call member function
//	std.getdata();
//	std.displaydata();
//
//return 0;
	
//}
//
//                     Task 2: Rectangle(Functions ouside class)

//int main(){
//	Rectangle rec;
////member functions calling
//	rec.setDimension();
//	cout<<"\n\nArea of rectangle will be: "<<rec.area()<<endl;
//	cout<<"\nPerimeter of rectangle will be: "<<rec.perimeter()<<endl;
//	
//	return 0;
//}

//                    Task 3: Voting Eligibility

//int main(){
//	Voter V;
//	V.setdata();
//	if(V.iseligible()){
//		cout<<"You are eligible for casting vote: "<<endl;
//	}else{
//		cout<<"You are not eligible for casting vote: "<<endl;
//	}
//	
//	return 0;
//}

//                    Task 4: Temprature Convertor

//int main(){
//	Temperature T;
//	cout<<"Enter Temprature in celsius: ";
//	cin>>T.celsius;
//	T.displayFahrenhiet();
//	
//	return 0;
//}
//                    Task 5: Calculator (Functions outside class)

//int main(){
//	Calculator cal;
//	int choice;
//	
//	cal.setnumber();
//	cout<<"Choose operation that you want to perform : ";
//	cout<<"\n1.Add \n2.Subtract \n3.Multiply \n4.Divide \n";
//	cout<<"Enter your choice: ";
//	cin>>choice;
//	cout<<fixed;
//	
//	switch (choice){
//		case 1:
//			cout<<"Result: "<<cal.add()<<endl;
//			break;
//		case 2:
//			cout<<"Result: "<<cal.subtract()<<endl;
//			break;
//		case 3:
//			cout<<"Result: "<<cal.multiplay()<<endl;
//			break;
//		case 4:
//			cout<<"Result: "<<cal.division()<<endl;
//			break;
//		default:
//			cout<<"Invalid choice! ";
//		
//	}
//	
//	return 0;
//	
//}

 
//                        Task 6 : Encapsulation


int main(){
	Product P;
	P.setName( " ");
	P.setPrice(-50);
	P.setQuantity(-2);
	
	P.setName("Laptop");
	P.setPrice(1200.50);
	P.setQuantity(5);
	
	cout<<"\nProduct: "<<P.getName()<<endl;
	cout<<"\nPrice: $"<<P.getprice()<<endl;
	cout<<"\nQuantity: "<<P.getquantity()<<endl;
	
	return 0;
	
}
