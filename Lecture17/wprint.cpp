#include<iostream>
using namespace std;
void waveprint(int arr[3][4],int tr,int tc){

	for(int colno=0;colno<=tc-1;colno++){
		if(colno%2==0){//0%2==0
		// col is even-->downward print
		for(int rno=0;rno<=tr-1;rno++){
			cout<<arr[rno][colno]<<" ";
		}
	}
	else{
		// colno is odd -->upward print
		for(int rno=tr-1;rno>=0;rno--){
			cout<<arr[rno][colno]<<" ";
		}


	}

	}	

}
int main(){
	int arr[3][4]={
		{3,4,1,5},
		{6,7,2,8},
		{9,0,2,3}
	};

	waveprint(arr,3,4);
	cout<<endl;






	return 0;
}