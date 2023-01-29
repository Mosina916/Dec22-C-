#include<iostream>
using namespace std;
int fact(int a){//5!-->5*4*3*2*1
	int ans=1;
	int i=a;//initilization
	while(i>=1){
		ans=ans*i;//1*5*4*3*2*1
		i=i-1;//0

	}
	return ans;
}
// void ncr(int n,int r){
int ncr(int n,int r){
	// fans=n!/(r!*(n-r)!)
	int fans=fact(n)/(fact(r)*fact(n-r));
	// cout<<fans<<endl;
	return fans;
}
int main(){
	int n,r;
	cin>>n>>r;//5
	cout<<ncr(n,r)<<endl;
	return 0;
}