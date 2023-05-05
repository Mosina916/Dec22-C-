#include<iostream>
using namespace std;
// rec sol
int minstepstreach1(int n){//10
	// base case
	if(n==1){
		return 0;
	}
	// rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=minstepstreach1(n-1);//9 to 1 tak min steps
	if(n%2==0){
		// to mai /2 kar sakti hun
		y=minstepstreach1(n/2);//5
	}
	if(n%3==0){
		// to mai /2 kar sakti hun
		z=minstepstreach1(n/3);//5
	}

	return min(x,min(y,z))+1;


}

// td sol 
int tdminstepstreach1(int n,int *arr){//10
	// base case
	if(n==1){
		return arr[n]=0;
	}
	if(arr[n]!=-1){
		return arr[n];


	}
	// rec case
	int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=tdminstepstreach1(n-1,arr);//9 to 1 tak min steps
	if(n%2==0){
		// to mai /2 kar sakti hun
		y=tdminstepstreach1(n/2,arr);//5
	}
	if(n%3==0){
		// to mai /2 kar sakti hun
		z=tdminstepstreach1(n/3,arr);//5
	}

	return arr[n]=min(x,min(y,z))+1;
}

int bottomup(int n){
	int *arr=new int[n+1];
	arr[1]=0;


	for(int i=2;i<=n;i++){
		int x=INT_MAX,y=INT_MAX,z=INT_MAX;
	x=arr[i-1];//0
	if(i%2==0){
		y=arr[i/2];//0

	}
	if(i%3==0){
		z=arr[i/3];
	}

	arr[i]=min(x,min(y,z))+1;

	}
	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;

	return arr[n];
	





}


int main(){
	// ASSUME N >=1
	int n;
	cin>>n;//10
	cout<<"simple rec sol "<<minstepstreach1(n)<<endl;
	cout<<"bottomup sol is "<<bottomup(n)<<endl;
	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;
	}


	cout<<"td sol "<<tdminstepstreach1(n,arr)<<endl;

	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;

	return 0;
}