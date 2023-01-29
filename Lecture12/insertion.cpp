#include<iostream>
using namespace std;
int main(){
	// int arr[]={4,0,0,-3,2,1,2,3,1,5,2};
	int arr[]={4,3,1,5,2};
	int n=sizeof(arr)/sizeof(int);
	int j;
	for(int i=1;i<=n-1;i++){
		int ele=arr[i];
		// int j;
		for(j=i-1;j>=0;j--){
			if(ele<arr[j]){
				arr[j+1]=arr[j];
			}
			else{
				break;
			}
			
		}
		arr[j+1]=ele;
	}
	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return 0;
}