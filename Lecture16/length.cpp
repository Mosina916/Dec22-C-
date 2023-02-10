#include<iostream>
using namespace std;
int lengthofarr(char arr[100]){
	int i=0;
	// int cochar=0;

	// loop
	while(arr[i]!='\0'){
		// cochar++;//6
		i++;//1


	}
	// return cochar;
	return i;

}
int main(){
	char arr[100];
	// cin>>arr;
	cin.getline(arr,100);//Hel hi\0
	cout<<"length of arr is "<<lengthofarr(arr)<<endl;

	


	return 0;
}