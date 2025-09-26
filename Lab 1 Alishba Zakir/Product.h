#include<iostream>
using namespace std;
class Product{
private:
	string name;
	double price;
	int quantity;
	
	
	public:
		void setName(string n){
			if(n.empty()){
		cout<<"Invalid name."<<endl;		
			}
			else{
				name=n;
			}
		}
	void setPrice(double p){
		if(p>0){
			price=p;
		}
		else{
			cout<<"Invalid price :"<<endl;
		}
	}
	void setQuantity(int q){
		if(q>=0){
			quantity =q;
		}
		else{
			cout<<"Invalid quantity:";
		}
	}
// getter 
string getName(){
		return name;
	}
	double getprice(){
		return price;
	}
	int getquantity(){
		return quantity;
	}
};