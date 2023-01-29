#include<iostream>
using namespace std;
void update(int x){// int x=10; //function decleartion
	// function definition
	x=x+30;
	cout<<"inside update fun "<<x<<endl;//2 40

}
int main(){
	int x=10;
	cout<<x<<endl;//1
	update(x);//function call function invoking

	cout<<"after update fun "<<x<<endl;//3

	return 0;
}