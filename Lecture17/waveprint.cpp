#include<iostream>
using namespace std;
void spiralprint(int arr[3][4],int tr,int tc){
	// 
	int sr=0;
	int sc=0;
	int ec=tc-1;
	int er=tr-1;


// loop
	while(sc<=ec and sr<=er){
		// pehla row ka kaam done
	// 3 1 6 9 2
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";
	}
	sr++;//1

	// last col
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;

	// end row
	for(int k=ec;k>=sc;k--){
		cout<<arr[er][k]<<" ";
	}
	er--;

	// ist col
	for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<" ";
	}
	sc++;

	}

}
int main(){
	int arr[3][4]={
		{3,4,1,5},
		{6,7,2,8},
		{9,0,2,3}
	};
	// 3 6 9 0 7 4 1 2 2 3 8 5

	spiralprintprint(arr,3,4);
	cout<<endl;






	return 0;
}