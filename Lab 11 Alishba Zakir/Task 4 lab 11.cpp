#include<iostream>
#include<fstream>
using namespace std;
int main(){
	fstream file("greet.txt",ios::in |ios::out);
		cout<<"Position of  read pointer before reading "<<file.tellg()<<endl;
		char ch;
	cout<<"Move read pointer position to 13 "<<endl;
	file.seekg(13);
	while(file.get(ch)){
		cout<<"Character Read "<<ch<<"Position of pointer after reading "<<file.tellg()<<endl;
	}
	file.close();
	return 0;
}