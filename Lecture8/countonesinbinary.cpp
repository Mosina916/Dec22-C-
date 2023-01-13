#include<iostream>
using namespace std;
int main(){
	// no&1 gives last digit
	// no>>1 removes last digit

	int no;
	cin>>no;//13--?1101 no of 1's no of setbits
	int count=0;

	while(no>0){
		int rem=(no&1);// 13&1 1101&1-->1  110&1 11&1 1&1
	if(rem==1){
		count=count+1;//3

	}
	no=(no>>1);//13>>1 1>>1

	}

	cout<<count<<endl;
	




	return 0;
}