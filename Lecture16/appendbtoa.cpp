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
void append(char arr1[100],char arr2[100]){
	int i=lengthofarr(arr1);
	int j=0;

	while(j<=lengthofarr(arr2)){
			arr1[i]=arr2[j];
			i++;
			j++;

	}
	cout<<arr1<<endl;//Hellocoding
	cout<<arr2<<endl;//coding
}
int main(){
	char arr1[100];
	char arr2[100];
	
	cin.getline(arr1,100);//Hello
	cin.getline(arr2,100);//coding
	// cout<<arr1<<arr2<<endl;

	// arr1-->Hellocoding
	// arr2-->coding
	append(arr1,arr2);
	


	return 0;
}