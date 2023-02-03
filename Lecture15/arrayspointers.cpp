// we should never put garbage in pointer
#include<iostream>
using namespace std;

int main(){
	// int arr[]={2,3,1,5,6};
	// int n=5;
	int n;
	cin>>n;
	int arr[100];
	for (int i = 0; i <n; ++i)
	{
		cin>>*(arr+i);
	}

	// for(int i=0;i<=4;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	for(int i=0;i<n;i++){
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;

	// for(int i=0;i<n;i++){
	// 	cin>>arr[i];
	// }

	// for(int i=0;i<n;i++){
	// 	cin>>*(arr+i);
	// }
	// cout<<arr[0]<<endl;
	// cout<<*arr<<endl;

	// cout<<arr[1]<<endl;
	// cout<<*(arr+1)<<endl;

	// *arr is same as arr[0]
	// // *arr+1 is same as arr[1]
	// in general *(arr+i) is same as arr[i]


	// 	// // array ka naam kya deta hai print karke
	// // cout<<&arr[0]<<endl;
	// // cout<<arr<<endl;
	// // in general
	// // &arr[i] is same as arr +i
	// // &arr[0] is same as arr+0
	// // // &arr[1] is same as arr+1
	// // cout<<&arr[1]<<endl;
	// // cout<<arr+1<<endl;


	// // cout<<&arr[2]<<endl;
	// // cout<<arr+2<<endl;

	// // cout<<&arr[2]<<endl;
	// // cout<<&arr[3]<<endl;
	// // cout<<&arr[4]<<endl;



	
	return 0;
}
