// we should never put garbage in pointer
#include<iostream>
using namespace std;
int main(){
	int r=2;
	// int *rptr=&r;
	// 
	int *rptr=NULL;//0x000000000
	int *rptr=0;


	// cout<<2*3.14*r<<endl;//12.56

	cout<<2*3.14*(*rptr)<<endl;//12.56

	// er
	// garbagevs

	// std::vector<stdsg
	// wg
	// wgbwr

	// s.begin(), s.end()> v;



	return 0;
}
