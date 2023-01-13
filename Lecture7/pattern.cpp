#include<iostream>
using namespace std;
int main(){
	int n;
	cin>>n;
	if(n==1){
		cout<<0<<endl;

	}
	else{
		cout<<0<<endl;
		cout<<1<<" "<<1<<endl;
		int a=1;
		int b=1;
		int c=a+b;//2
		int rowno=3;
		while(rowno<=n){
			int stc=1;
			while(stc<=rowno){
				// cout<<'*';
				cout<<c<<" ";
				a=b;
				b=c;
				c=a+b;
				stc=stc+1;
			}
			rowno=rowno+1;
			cout<<endl;

		}
	}





	return 0;
}
