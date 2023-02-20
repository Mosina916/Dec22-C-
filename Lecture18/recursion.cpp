#include<iostream>
using namespace std;
// fact(int n){//0
// 	// base case
// 	if(n==0){
// 		return 1;

// 	}
// 	// rec case
// // without storing
// 	return n*fact(n-1);
// 	// with storing 

// 	// int cans=fact(n-1);//fact(4) pure assumption-->24
// 	// // mujhe n *cans
// 	// int fans=n*cans;//5*24-->120
// 	// return fans;



// }
 // rec-->function calling itself
int fact(int n){//0
	// base case// stopping condition
	if(n==0){
		return 1;
	}
	// rec case
	return n*fact(n-1);//120

}
int main(){
	int n;
	cin>>n;//5
	// int ans=1;
	// for(int i=1;i<=n;i++){
	// 	ans=ans*i;
	// }
	// cout<<ans;
	// rec 

	cout<<fact(n)<<endl;





	return 0;
}