#include<iostream>
using namespace std;
int main(){
	int arr[]={4,0,0,-3,2,1,2,3,1,5,2};
	int n=sizeof(arr)/sizeof(int);
	
	for(int pos=0;pos<=n-2;pos++){
		int minindex=pos;
		for(int j=pos+1;j<=n-1;j++){
			if(arr[j]<arr[minindex]){
				minindex=j;
			}
		}
		swap(arr[pos],arr[minindex]);
	}

	for(int i=0;i<=n-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;


	return 0;
}