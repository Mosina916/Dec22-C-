#include<iostream>
using namespace std;

void decprint(int n){//0
	// base case
	if(n==0){
		return;

	}
	// rec case
	cout<<n<<" ";//4 
	decprint(n-1);//


}

void incprint(int n){//4
	// base case
	if(n==0){
		return;

	}
	// rec case
	incprint(n-1);//1 2 3
	cout<<n<<" ";//4 


}
int main(){
	int n;
	cin>>n;
	decprint(n);

	cout<<endl;
	incprint(n);



	return 0;
}