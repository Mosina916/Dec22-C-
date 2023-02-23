#include<iostream>
using namespace std;
int sumofele(int arr[],int n){//1
	// base case
	if(n==0){
		return 0;

	}
	
	// rec case
	return sumofele(arr,n-1)+arr[n-1];//12
	
}
int sumofele2(int arr[],int n){//1
	// base case
	if(n==0){
		return 0;

	}
	
	// rec case
	return sumofele2(arr+1,n-1)+arr[0];//12
	
}

int sumofele3(int arr[],int n,int i){//1
	// base case
	if(i==n){
		return 0;

	}
	// rec case
	return sumofele3(arr,n,i+1)+arr[i];//12
	
}
int main(){
	int arr[]={3,4,1,2};
	// int arr[]={3,2,6,9};
	int n=4;
	cout<<sumofele(arr,n)<<endl;
	cout<<sumofele2(arr,n)<<endl;
	cout<<sumofele3(arr,n,0)<<endl;
	



	return 0;
}