//  	   * 
//       * * 
//     * * * 
//   * * * * 
// * * * * * 
#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;

		// for a single row
	int rowno=1;
	while(rowno<=trows){
		// ===========================================
	// spaces
	int spc=1;
	while(spc<=trows-rowno){//1<=0
		cout<<"  ";
		spc=spc+1;//3

	}
	// stars
	int starc=1;
	while(starc<=rowno){//2<=2
		cout<<"* ";
		starc=starc+1;//3


	}
	cout<<endl;
	rowno=rowno+1;
	// ===========================================
	}
	





	




	return 0;
}