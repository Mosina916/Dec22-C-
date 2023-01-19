#include<iostream>
using namespace std;
int main(){
	int arr[100];
	int n;
	cin>>n;//5
	
	for(int i=0;i<=n-1;i++){
		cin>>arr[i];
	}
// 	// 3 9 6 -2 13 
	int largest =arr[0];//3
	for(int j=1;j<=n-1;j++){
		if(arr[j]>largest){ //3>9
		largest=arr[j];//9

	}

	}
	cout<<"largest no is "<<largest<<endl;
	






	return 0;
}

	