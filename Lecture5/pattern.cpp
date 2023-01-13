#include <iostream>
using namespace std;
int main(){

	int trows;
	cin>>trows;
	int rowno=1;
	while(rowno<=trows){
		// spaces
	int spc=1;
	while(spc<=trows-rowno){
		cout<<' '<<'\t';
		spc=spc+1;
	}
	// inc ki jagah stars print
	int stc=1;
	int stno=rowno;//4
	while(stc<=rowno){
		// cout<<'*';
		cout<<stno<<'\t';//4567
		stno=stno+1;//8

		stc=stc+1;

	}
	// stno ki value hogi 8


	// dec ki jagah hash print
	int hc=1;
	stno=stno-2;//6
	while(hc<=rowno-1){
		// cout<<'#';
		cout<<stno<<'\t';
		stno=stno-1;

		hc=hc+1;
	}
	cout<<endl;
	rowno=rowno+1;
	}

	// rowno  3
	




	return 0;
}