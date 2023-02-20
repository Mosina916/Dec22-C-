#include<iostream>
using namespace std;
// bool findkeyinamatrix(int arr[3][4],int tr,int tc,int key){

// 	for(int i=0;i<=tr-1;i++){
// 		for(int j=0;j<=tc-1;j++){
// 		if(arr[i][j]==key){//6==6
// 			return true;

// 	}

// 	}

// 	}
// 	return false;
	
	

// }
int k,l;//global variables
// if index needed to get print 
bool findkeyinamatrix(int arr[3][4],int tr,int tc,int key){

	for(int i=0;i<=tr-1;i++){
		for(int j=0;j<=tc-1;j++){
		if(arr[i][j]==key){//6==6
			k=i;
			l=j;
			// cout<<key<<" is present at index "<<i<<" "<<j<<endl;
			return true;
	}
	}
	}
	return false;
}
int main(){
	int arr[3][4]={
		{3,4,1,5},
		{6,7,2,8},
		{9,0,2,3}
	};

	int tr=3;
	int tc=4;
	int key;
	cin>>key;//16

	if(findkeyinamatrix(arr,tr,tc,key)==true){
		cout<<key<<" is present at index "<<k<<" "<<l<<endl;

	}
	else{
		cout<<"key is not present"<<endl;
	}
// printing 2d array
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
		cout<<arr[i][j]<<" ";
	}

	cout<<endl;

	}



	return 0;
}