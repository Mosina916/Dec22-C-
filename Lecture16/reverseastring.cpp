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
void reverse(char arr1[100]){
	int i=0;
	int j=lengthofarr(arr1)-1;

	while(i<j){
		swap(arr1[i],arr1[j]);
		i++;
		j--;

	}
	


	// swap(arr1[i++],arr1[j--]);
	
}
int main(){
	char arr1[100];
	cin.getline(arr1,100);//he llo


	reverse(arr1);

	cout<<arr1<<endl;

	



	return 0;
}