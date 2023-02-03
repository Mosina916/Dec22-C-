// we should never put garbage in pointer
#include<iostream>
using namespace std;
void f(int*aptr){//// int *aptr=&a;

	*aptr=*aptr+30;//120
	cout<<*aptr<<endl;//120

} 
void f1(int &aptr){//// int &aptr=a;

	aptr=aptr+30;//120
	cout<<aptr<<endl;//120

} 
int main(){
	int a=90;
	cout<<a<<endl;//90
	// f(&a);//0x...987
	f1(a);
	// int *aptr=&a;
	cout<<a<<endl;//120

	return 0;
}
