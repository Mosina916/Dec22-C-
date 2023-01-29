#include<iostream>
using namespace std;
void mergetwosortedarray(int a[7],int b[4],int m,int n){
	int i=m-1;
	int j=n-1;
	int k=m+n-1;
	while(i>=0 and j>=0){
		if(a[i]>b[j]){
			a[k]=a[i];
			i--;
			k--;
		}
		else{
			a[k]=b[j];
			j--;
			k--;

		}

	}
	// agar a array khatam hoagyi mtlb i<0 tou b ko a mai copy kardo
	while(j>=0){
		a[k]=b[j];
		j--;
		k--;
	}


}
int main(){
	// int a[7]={3,7,9};
	// int b[4]={2,5,8,10};
	// int m=3,n=4;


	int a[5]={1,2,3};
	int b[4]={7,9};
	int m=3,n=2;

	mergetwosortedarray(a,b,m,n);

	for(int i=0;i<=m+n-1;i++){
		cout<<a[i]<<" ";
	}
	cout<<endl;


	return 0;
}