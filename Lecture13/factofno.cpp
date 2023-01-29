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
int main(){
	int n;
	cin>>n;//5
	cout<<fact(n)<<endl;
	cin>>n;
	cout<<fact(n)<<endl;
	cin>>n;
	cout<<fact(n)<<endl;

	
	





	return 0;
}