#include <iostream>
using namespace std;
int binarysearch(int arr[],int s,int e,int key){


	// find mid
	while(s<=e){
		int mid=(s+e)/2;
	if(arr[mid]==key){
		return mid;
	}
	else if(key>arr[mid]){
		s=mid+1;
	}
	else{
		e=mid-1;

	}

	}

	return -1;
	

}
int main(){
	int arr[]={2,3,4,7,8,9,10};
	int n=sizeof(arr)/sizeof(int);
	int key;
	cin>>key;//9
	int x=binarysearch(arr,0,n-1,key);

	if(x==-1){
		cout<<"key not present"<<endl;
	}
	else{
		cout<<"key is present at index "<<x<<endl;
	}
	



	return 0;
}