#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;//9

	cin.ignore();//ignore ek char ko
	// cin.ignore();
	
	char arr1[100];
	
	
	cin.getline(arr1,100);//Hello
	// cin.ignore();
	
	
	cout<<n<<endl;
	cout<<arr1<<endl;
	


	return 0;
}