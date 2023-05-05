#include<iostream>
using namespace std;
// rec sol
int fibo(int pos){
	// base case
	if(pos==0||pos==1){
		return pos;
	}
	// rec case
	return fibo(pos-1)+fibo(pos-2);
}
// topdown dp sol
int dpfibo(int pos,int *arr){
	// base case
	if(pos==0||pos==1){
		return arr[pos]=pos;
	}
	// cal se pehle check
	if(arr[pos]!=-1){
		return arr[pos];
	}

	// rec case
	return arr[pos]=dpfibo(pos-1,arr)+dpfibo(pos-2,arr);
}

// bottom up -->itertaive sol

int fibobottup(int n){//5
	int *arr=new int[n+1];
	arr[0]=0;
	arr[1]=1;


	for(int i=2;i<=n;i++){
		arr[i]=arr[i-1]+arr[i-2];

	}

	// for(int i=0;i<=n;i++){
	// 	cout<<arr[i]<<" ";
	// }

	// cout<<endl;
	return arr[n];
	

}



int main(){
	
	int n;
	cin>>n;//5

	cout<<"bottom up "<<fibobottup(n)<<endl;
	
	// // dp sol
	// int arr[n+1];
	int *arr=new int[n+1];
	for (int i = 0; i <=n; ++i)
	{
		arr[i]=-1;//it will rep abhi tak val calculate nahi hai

	}

	cout<<"dp wala sol "<<dpfibo(n,arr)<<endl;
	// for (int i = 0; i <=n; ++i)
	// {
	// 	cout<<arr[i]<<" ";
	// }
	
	// cout<<endl;


	cout<<"simple rec " <<fibo(n)<<endl;




	return 0;
}