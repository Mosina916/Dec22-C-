#include<iostream>
using namespace std;
int main(){
	int tn;
	cin>>tn;//5

	int no;

	cin>>no;//5
	int ans=no;//5

// loop
	int i=1;
	while(i<=tn-1){
		cin>>no;//6
	ans=(ans^no);//5^3-->6^6-->0^5-->5^6-->3
	i=i+1;


	}

	cout<<ans<<endl;

	


	return 0;
}