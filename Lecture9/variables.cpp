#include<iostream>
using namespace std;
int pm=90;//global variable
#define pi 3.14
int main(){
	int a=10;
	// cout<<pm<<endl;

	float b=45.34;
	int c=80;
	int pm=45;
	if(a>=5){
		int d=80;
		int b=30;
		// int pm=56;
		cout<<pm<<endl;
		// scope resolution operator ::
			// cout<<::pm<<endl;
			// ::pm=::pm+100;//190
			// cout<<::pm<<endl;

		// cout<<a<<endl;
		// cout<<pm<<endl;

		
	}
	cout<<::pm<<endl;
	// if(c<=100){
	// 	int e=56;
	// 	// int a=7;
	// 	a=a+34;
	// 	cout<<a<<endl;//44
		
	// }
	// 	cout<<c<<endl;



	// if(a>=5){
	// 	int d=80;
	// 	int b=30;
	// 	cout<<a<<endl;
	// 	cout<<b<<endl;
	// 	cout<<c<<endl;
	// 	cout<<d<<endl;
	// }
	// if(c<=100){
	// 	int e=56;
	// 	// int a=7;
	// 	a=a+34;
	// 	cout<<a<<endl;//44
	// 	cout<<b<<endl;//45.34
	// 	cout<<c<<endl;//80
	// 	// cout<<d<<endl;//error
	// 	cout<<e<<endl;//56
	// }
	// 	cout<<a<<endl;//44
	// 	cout<<b<<endl;
	// 	cout<<c<<endl;
		// cout<<d<<endl;//error
		// cout<<e<<endl;//error
	
	return 0;
}