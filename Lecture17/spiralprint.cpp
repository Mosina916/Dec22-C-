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
	// 3 1 6 9 2-->
	for(int i=sc;i<=ec;i++){
		cout<<arr[sr][i]<<" ";
	}
	sr++;//1

	// last col downward
	for(int j=sr;j<=er;j++){
		cout<<arr[j][ec]<<" ";
	}
	ec--;

	// end row<--
	if(sr<=er){
			for(int k=ec;k>=sc;k--){
		cout<<arr[er][k]<<" ";
	}
	er--;


	}

	// ist col upward

	if(sc<=ec){
		for(int l=er;l>=sr;l--){
		cout<<arr[l][sc]<<" ";
	}
	sc++;

	}

	}
	

}
int main(){

	// this code will run for square matrix only 
	// h\w make this code run for square and non square matrix 
	int arr[4][4]={
		{3,4,1,5},
		{6,7,2,8},
		{9,0,2,3},
		{5,4,3,2}
	};
	// 3 4 1 5 8 3 2 3 4 5 9 6 7  2 2 0

	// int arr[3][4]={
	// 	{3,4,1,4},
	// 	{6,7,2,3},
	// 	{9,0,2,3},
	
	// };
	// 3 4 1 4 3 3 2 0 9 6 7 2 7
	spiralprint(arr,3,4);
	cout<<endl;






	return 0;
}