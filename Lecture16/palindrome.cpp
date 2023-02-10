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
bool palindromeornot(char arr[100]){
	int i=0;
	int j=lengthofarr(arr)-1;//12

// loop
	while(i<j){
		if(arr[i]==arr[j]){
		i++;
		j--;

	}
	else{
		return false;
	}

	}
	return true;

	
}
int main(){
	char arr[100];
	// cin>>arr;
	cin.getline(arr,100);//Hel hi\0
	if(palindromeornot(arr)==true){
		cout<<"yes palindrome"<<endl;
	}
	else{
		cout<<"Not palindrome"<<endl;

	}

	


	return 0;
}