#include<iostream>
using namespace std;
class Distance{
	private:
		int feet;
		int inches;
		public:
			Distance(int f=0,int i=0){
				feet=f;
				inches=i;
					if(inches>=12){
				feet += inches/12;
				inches = inches%12;
			}
			}
			bool operator==(const Distance&d)const{
				return (feet==d.feet&& inches ==d.inches);
				
			}
			void display() const{
				cout<<feet<<"feet"<<inches<<"inches";
				
			}
};
int main(){
	Distance d1(4,6);
	Distance d2(9,2);
	Distance d3(6,8);
	cout<<"Distance 1 "<<d1.display()<<endl;
	cout<<"Distance 2"<<d2.display()<<endl;
	cout<<"Distance 3"<<d3.display()<<endl;
	if(d1==d2){
		cout<<"distance 1 and 2 are equal"<<endl;
		
	}
	else{
		cout<<"Not equal"<<endl;
	}
		if(d1==d3){
		cout<<"distance 1 and 3 are equal"<<endl;
}else{
		cout<<"Not equal"<<end
}
return 0;
}





