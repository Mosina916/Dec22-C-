#include<iostream>
using namespace std;
int digitsin(int n){//980

	int c=0;

	while(n>0){
		n=n/10;//980/10-->98/10-->9/10-->0
	c++;//3

	}
	return c;
	
}
int main(){
	int t;
	cin>>t;//1
	while(t--){
		int m;
		cin>>m;
		int arr[1000];
		for (int i = 0; i <m; ++i)
		{
			cin>>arr[i];
		}



	// bubble sort
	for(int i=0;i<=m-2;i++){ //i-->4<=3

	for(int j=0;j<=m-2-i;j++){//5-2-3-->0
		long long int no1=arr[j]*pow(10,digitsin(arr[j+1]))+arr[j+1];
		long long int no2=arr[j+1]*pow(10,digitsin(arr[j]))+arr[j];
		if(no1>no2){
			swap(arr[j],arr[j+1]);
		}
	

	}
}
// reverse print array
for(int l=m-1;l>=0;l--){
	cout<<arr[l];

}
cout<<endl;



	}

	
	

	return 0;
}