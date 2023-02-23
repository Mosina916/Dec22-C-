#include<iostream>
using namespace std;
string arr[]={"Zero","One","two","Three","Four","Five","six","Seven","Eight","Nine"};
void reversewordprint(int n){//0
	// base case
	if(n==0){
		return;

	}
	// rec case//2048
	int indx=n%10;//8 
	cout<<arr[indx]<<" ";//
	reversewordprint(n/10);//2/10-->0

}
int main(){
	int n;
	cin>>n;//2048
	reversewordprint(n);

	
	return 0;
}