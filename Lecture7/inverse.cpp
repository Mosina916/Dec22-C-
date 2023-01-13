#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//32145
	int ans=0;

	int pos=1;

	while(no>0){
		int rem=no%10;//4
	ans=ans+pos*pow(10,rem-1);//10000+2000
	no=no/10;
	pos=pos+1;

	}

	cout<<ans<<endl;
	








	return 0;
}
