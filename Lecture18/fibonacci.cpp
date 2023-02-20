#include<iostream>
using namespace std;
// int fibo(int pos){//5
// 	// base case
// 	// if(pos==1||pos==2){
// 	// 	return pos-1;
// 	// }
// 	if(pos==1){
// 		return 0;
// 	}
// 	if(pos==2){
// 		return 1;
// 	}
// 	// rec case
// 	return fibo(pos-1)+fibo(pos-2);//fibo(4)-->2+1
// }

// // pos starts from 1

// int fibo(int pos){//2
// 	// base case
// 	if(pos==1){
// 		return 0;
// 	}
// 	if(pos==2){
// 		return 1;
// 	}
// 	// rec case
// 	return fibo(pos-1)+fibo(pos-2);//fibo(4)-->2
// }


// pos starts from 0

int fibo(int pos){//2
	// base case
	if(pos==0){
		return 0;
	}
	if(pos==1){
		return 1;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);//fibo(4)-->2
}
int main(){
	// 1 based pos
	int pos;
	cin>>pos;//5
	cout<<fibo(pos)<<endl;




	return 0;
}