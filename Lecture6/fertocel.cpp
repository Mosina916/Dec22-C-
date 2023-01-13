#include<iostream>
using namespace std;
int main(){
	// int init=0;
	// int final=300;
	// int step=20;
	int init,final,step;
	cin>>init>>final>>step;

	int f=init;//0

// loop
	while(f<=final){
		// int c=(5/9)*(f-32);
		int c=(5.0/9)*(f-32);
		// int c=(5/9.0)*(f-32);
		// int c=(5.0/9.0)*(f-32);
		// float c=(5.0/9.0)*(f-32);
		cout<<f<<'\t'<<c<<endl;
		f=f+step;//0+20;//320

	}
	





	return 0;
}