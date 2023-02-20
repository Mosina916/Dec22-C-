#include<iostream>
using namespace std;
int main(){
	// declare 2d array
// int arr[]={3,4,2,1};
	// datatype arrayname[rowno][col];
	// int arr[3][4]={
	// 	{3,4,1,5},
	// 	{6,7,2,8},
	// 	{9,0,2,3}
	// };

// you can ignore the row no if you are creating the array ad putting the values at the time of decleration
	// int arr[][4]={
	// 	{3,4,1,5},
	// 	{6,7,2,8},
	// 	{9,0,2,3}
	// };
	// int arr[100];
	// int n;
	// cin>>n;//5

	// user input 
	int arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//3 4

// nested loop
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];
	}
	}





	// row 0 
	// cout<<arr[0][0]<<" ";//3
	// cout<<arr[0][1]<<" ";//4
	// cout<<arr[0][2]<<" ";//1
	// cout<<arr[0][3]<<" ";//5

// printing 2d array
	for(int i=0;i<=2;i++){
		for(int j=0;j<=3;j++){
		cout<<arr[i][j]<<" ";
	}

	cout<<endl;

	}
	


	// row no 1

	// cout<<arr[1][0]<<" ";//3
	// cout<<arr[1][1]<<" ";//4
	// cout<<arr[1][2]<<" ";//1
	// cout<<arr[1][3]<<" ";//5


	// for(int j=0;j<=3;j++){
	// 	cout<<arr[1][j]<<" ";
	// }


	// row no 2
	// cout<<endl;



	// for(int j=0;j<=3;j++){
	// 	cout<<arr[2][j]<<" ";
	// }

	// cout<<arr[2][0]<<" ";//3
	// cout<<arr[2][1]<<" ";//4
	// cout<<arr[2][2]<<" ";//1
	// cout<<arr[2][3]<<" ";//5






	return 0;
}