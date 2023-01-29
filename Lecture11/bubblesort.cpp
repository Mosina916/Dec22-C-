#include<iostream>
using namespace std;
int main(){
	int arr[]={5,4,3,2,1};
	int tb=sizeof(arr)/sizeof(int);//5


	// sabse largest element apni post pe lana hai
	// bubble sort
	for(int i=0;i<=tb-2;i++){ //i-->4<=3

	for(int j=0;j<=tb-2-i;j++){//5-2-3-->0
		if(arr[j]>arr[j+1]){
			swap(arr[j],arr[j+1]);
		}
	}
}


// 	for(int i=1;i<=tb-1;i++){ //i-->2

// 	for(int j=0;j<=tb-1-i;j++){// i==1 -->j 0 to 3
// 		if(arr[j]>arr[j+1]){	//i==2 j==0 to 2 
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}
// }


// 	for(int i=1;i<=tb-1;i++){ //i-->2

// 	for(int j=0;j<=tb-1-i;j++){// i==1 -->j 0 to 3
// 		if(arr[j]>arr[j+1]){	//i==2 j==0 to 2 
// 			// arr[j]=arr[j+1]; this is wrong
// 		}
// 	}
// }


	for(int i=0;i<=tb-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;








	// for(int j=0;j<=3;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	// 4 3 2 1 5
	// 2nd largest ko apni correct pos pe
	// for(int j=0;j<=2;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }
	// 3 2 1 4 5

	// 3rd largest ko apni correct pos pe
	// for(int j=0;j<=1;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	// 2 1 3 4 5

	// 4th largest ko apni correct pos pe
	// for(int j=0;j<=0;j++){
	// 	if(arr[j]>arr[j+1]){
	// 		swap(arr[j],arr[j+1]);
	// 	}
	// }

	// 1 2 3 4 5





	// for(int i=0;i<=tb-1;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;




	return 0;
}