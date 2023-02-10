#include<iostream>
using namespace std;
// int sum(int a,int b){
// 	int s=a+b;
// 	return s;
// }

// // float sum(float a,int b){
// // 	float s=a+b;
// // 	return s;
// // }

// int sum(int a,int b,int c){
// 	int s=a+b+c;
// 	return s;
// }

// int sum(int a,int b,int c,int d){
// 	int s=a+b+c+d;
// 	return s;
// }

// int sum(int a,int b,int c,int d,int e){
// 	int s=a+b+c+d+e;
// 	return s;
// }


// int sum(int a=0,int b=0,int c=0,int d=0,int e=0,int f=0,int g=0){
// 	int s=a+b+c+d+e+f+g;//2+3+6+1+4+0+0+0
// 	return s;
// }

int mult(int a=1,int b=1,int c=1,int d=1,int e=1,int f=1,int g=1){
	int m=a*b*c*d*e*f*g;//
	return m;
}
int main(){
	// cout<<sum(2.2,5)<<endl;
	// cout<<sum(3,4)<<endl;
	// cout<<sum(2,3,4)<<endl;
	// cout<<sum(2,3,1,4)<<endl;
	// cout<<sum(2,3,6,1,4)<<endl;

	cout<<mult(3,4)<<endl;
	cout<<mult(2,3,4)<<endl;
	cout<<mult(2,3,1,4)<<endl;
	cout<<mult(2,3,6,1,4)<<endl;


	



	return 0;
}