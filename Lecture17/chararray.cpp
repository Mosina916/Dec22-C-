#include<iostream>
using namespace std;
int main(){
	// declare 2d array
	// datatype arrayname[rowno][col];
	// char arr[3][4]={
	// 	{'D','O','G','T'},
	// 	{'P','E','N','Y'},
	// 	{'R','A','T','T'}
	// };

	// char arr[][4]={
	// 	{'D','O','G','T'},
	// 	{'P','E','N','Y'},
	// 	{'R','A','T','T'}
	// };

	char arr[100][100];
	int rows,cols;
	cin>>rows>>cols;//3 4

	 // nested loop
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];
	}
	}

	// printing 2d array
	// for(int i=0;i<=2;i++){
	// 	for(int j=0;j<=3;j++){
	// 	cout<<arr[i][j]<<" ";
	// }

	// cout<<endl;

	// }


// // nested loop
	for(int i=0;i<=rows-1;i++){
		for(int j=0;j<=cols-1;j++){
		cin>>arr[i][j];
	}
	}


	





	return 0;
}