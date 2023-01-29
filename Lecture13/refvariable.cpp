#include<iostream>
using namespace std;
void update(int &a){// int &a=x
	a=a+30;
	cout<<"inside update fun "<<a<<endl;//2 40

}
int main(){

	int x=10;
	cout<<x<<endl;//1
	update(x);

	cout<<"after update fun "<<x<<endl;//3

	// int tony=10;
	// int &sham=tony;
	// int &abc=tony;
	// tony=tony+1;

	// cout<<sham<<endl;
	// cout<<tony<<endl;
	// cout<<abc<<endl;





	return 0;
}