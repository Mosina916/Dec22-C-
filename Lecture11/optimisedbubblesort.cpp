#include<iostream>
using namespace std;
int main(){
	// int arr[]={5,1,2,3,4};
	// int arr[]={5,4,3,2,1};
	// int arr[]={5,4,1,2,3};
	// 4 1 2 3 5-->i==1
	// i==2 --> 1 2 3 4 5
	// i==3--> j=0 to 1
	int arr[]={5,1,3,2,4};
	int tb=sizeof(arr)/sizeof(int);//5


	// sabse largest element apni post pe lana hai
	// bubble sort

	// for(int i=1;i<=tb-1;i++){ //i-->2
	// 	for(int j=0;j<=tb-1-i;j++){// i==1 -->j 0 to 3
	// 		if(arr[j]>arr[j+1]){	//i==2 j==0 to 2 
	// 			swap(arr[j],arr[j+1]);
	// 			}
	// 		}
	// }


	// for(int i=1;i<=tb-1;i++){ //i-->1
	// 	cout<<i<<endl;
	// 	for(int j=0;j<=tb-1-i;j++){// i==1 -->j 0 to 3
	// 		if(arr[j]>arr[j+1]){	//i==2 j==0 to 2 
	// 			swap(arr[j],arr[j+1]);
	// 			}
	// 		}
	// }


	// bubble sort optimisation
	for(int i=1;i<=tb-1;i++){ //i-->2
		// cout<<i<<endl;
		bool kyaswaphuva=false;
		for(int j=0;j<=tb-1-i;j++){// 0<=2
			if(arr[j]>arr[j+1]){//1>2 2>3 3>4
				swap(arr[j],arr[j+1]);
				kyaswaphuva=true;
				}
			}
			if(kyaswaphuva==false){
				break;
			}
	}

	for(int i=0;i<=tb-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;





	return 0;
}