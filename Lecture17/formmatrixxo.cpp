#include<iostream>
using namespace std;
void formmatrix(char arr[100][100],int tr,int tc){
	// 
	int sr=0;
	int sc=0;
	int ec=tc-1;
	int er=tr-1;
	char ch='X';


// loop
	while(sc<=ec and sr<=er){
		// pehla row ka kaam done
	// 3 1 6 9 2-->
	for(int i=sc;i<=ec;i++){
	arr[sr][i]=ch;
	}
	sr++;//1

	// last col downward
	for(int j=sr;j<=er;j++){
		arr[j][ec]=ch;
	}
	ec--;

	// end row<--
	
			for(int k=ec;k>=sc;k--){
		arr[er][k]=ch;
	}
	er--;




	// ist col upward

	
		for(int l=er;l>=sr;l--){
		arr[l][sc]=ch;
	}
	sc++;

	

	if(ch=='X'){
		ch='O';
	}
	else{
		ch='X';
	}

	}
	

}
int main(){

	char arr[100][100];
	int tr,tc;
	cin>>tr>>tc;//7 7

	formmatrix(arr,tr,tc);


	for(int i=0;i<=tr-1;i++){
		for(int j=0;j<=tc-1;j++){
		cout<<arr[i][j]<<" ";
	}

	cout<<endl;

	}




	return 0;
}