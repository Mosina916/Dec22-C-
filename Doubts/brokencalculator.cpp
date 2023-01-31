#include<iostream>
#include<cmath>
using namespace std;
void multiply(int arr[1000],int &noofplacestoiterate,int nojissemulkarnahai){
	int carry=0;
	//noofplaces-->2

	int j;
	for(j=0;j<=noofplacestoiterate-1;j++){
		int prod=arr[j]*nojissemulkarnahai+carry;//12
		arr[j]=prod%10;//12%10-->2
		carry=prod/10;//1/10-->0

	}

	while(carry>0){
		arr[j]=carry%10;//6
		noofplacestoiterate++;//2
		j++;
		carry=carry/10;//6/10->0

	}

	

	

}
void factorial(int n){
	int arr[1000];
	arr[0]=1;
	int noofplacestoiterate=1;
	for(int i=1;i<=n;i++){
		multiply(arr,noofplacestoiterate,i);

	}


	// cout<<noofplacestoiterate<<endl;

	for(int j=noofplacestoiterate-1;j>=0;j--){
		cout<<arr[j];

	}


	cout<<endl;

}
int main(){
	int n;
	cin>>n;//5
	factorial(n);//5

	return 0;
}