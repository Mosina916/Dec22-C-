#include<iostream>
using namespace std;
int main(){
	int arr[]={4,2,6,5,5,5,0,7,-1,9,-2,5,4,3,2,1};
	int tb=sizeof(arr)/sizeof(int);//5

// bubble sort
	for(int i=1;i<=tb-1;i++){ //i-->2

	for(int j=0;j<=tb-1-i;j++){// i==1 -->j 0 to 3
		if(arr[j]>arr[j+1]){	//i==2 j==0 to 2 
			// swap(arr[j],arr[j+1]);
			// swap using 3rd variable
				// int c=a;
				// a=b;
				// b=c;
				// int c=arr[j];
				// arr[j]=arr[j+1];
				// arr[j+1]=c;


				// without using extra varaible
				// arr[j]=arr[j]+arr[j+1];
				// arr[j+1]=arr[j]-arr[j+1];
				// arr[j]=arr[j]-arr[j+1];


			// 3rd way single line swap
			// arr[j]=(arr[j]+arr[j+1])-(arr[j+1]=arr[j]);
			// inbuilt
			// swap(arr[j],arr[j+1]);
			arr[j]=(arr[j]^arr[j+1]);
			arr[j+1]=(arr[j+1]^arr[j]);
			arr[j]=(arr[j]^arr[j+1]);
			
			// x=x^y;
			// y=y^x;
			// x=x^y;



			}
		}
	}


	for(int i=0;i<=tb-1;i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl;











	// for(int i=0;i<=tb-1;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;




	return 0;
}