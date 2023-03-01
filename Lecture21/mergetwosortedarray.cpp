#include<iostream>
using namespace std;
void mergetwosortedarray(int arr1[],int n,int arr2[],int m){
	int temp[1000];
	int i=0;
	int j=0;
	int k=0;


// loop
	while(i<=n-1 and j<=m-1){
		if(arr1[i]<arr2[j]){
		temp[k]=arr1[i];
		i++;
		k++;

	}
	else{
		temp[k]=arr2[j];
		k++;
		j++;
	}

	}


	// j==m 2nd wali array khatam huvi
	// copy karo ist wali array ko
	while(i<=n-1){
		temp[k]=arr1[i];
		i++;
		k++;
	}

		// i==n ist wali array khatam huvi
	// copy karo 2nd wali array ko
	while(j<=m-1){
		temp[k]=arr2[j];
		j++;
		k++;
	}
	for(int l=0;l<=n+m-1;l++){
		cout<<temp[l]<<" ";
	}
	cout<<endl;
}


int main(){
	int arr1[5]={2,4,6,6,8};
	int n=sizeof(arr1)/sizeof(int);
	int arr2[4]={1,3,5,5};
	int m=sizeof(arr2)/sizeof(int);

	mergetwosortedarray(arr1,n,arr2,m);
	// 1,2,3,4,5,5,6,6,8

	// temp =2,4,6,6,8,1,3,5,5-->sort
	// 1,2,3,4,5,5,6,6,8
	// total comp=n+(n-1)/2-->n was no of elem
		// (n+m)*(n+m-1)/2-->36
	return 0;
}