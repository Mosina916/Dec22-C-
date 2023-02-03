// we should never put garbage in pointer
#include<iostream>
using namespace std;
// f(int b[],int n){
// *(b+i)-->b[i]
void f(int *b,int n){
	for (int i = 0; i <n; ++i)
	{
		*(b+i)=*(b+i)+10;
	}
	for (int i = 0; i <n; ++i)
	{
		cout<<*(b+i)<<" ";
	}
	cout<<endl;////12 13 11 15 16
}
int main(){
	int arr[]={2,3,1,5,6};
	int n=5;
	// array ka naam i.e arr is k/as internal pointer
	for (int i = 0; i <n; ++i)
	{
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;//2 3 1 5 6
	
	f(arr,n);//arr -->0x.....

	for (int i = 0; i <n; ++i)
	{
		cout<<*(arr+i)<<" ";
	}
	cout<<endl;//12 13 11 15 16
	


	
	return 0;
}
