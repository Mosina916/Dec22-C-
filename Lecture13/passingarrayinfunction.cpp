#include<iostream>
using namespace std;
void update(int b[],int n){// int x=10; //function decleartion
	for(int i=0;i<=n-1;i++){
		b[i]=b[i]+10;//13
	}
	// b-->13 12 14 11
	for(int i=0;i<=n-1;i++){
		cout<<b[i]<<" ";
	}
	cout<<endl; //13 12 14 11

}
int main(){
	int arr[]={3,2,4,1};
	int n=sizeof(arr)/sizeof(int);
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;//3 2 4 1

	update(arr,n);

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl; //13 12 14 11 


	return 0;
}