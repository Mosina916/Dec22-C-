// 5
//         * 
//       * * * 
//     * * * * * 
//   * * * * * * * 
// * * * * * * * * * 
#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;
	

	int rowno=1;
	while(rowno<=trows){
		// for a row=3
	// ===================================
	// spaces
	int spc=1;
	while(spc<=trows-rowno){//3<=2
		cout<<"  ";
		spc=spc+1;//3

	}

	// stars
	int starc=1;
	while(starc<=(2*rowno-1)){ //6<=5
		cout<<"* ";
		starc=starc+1;
	}
	cout<<endl;
	rowno=rowno+1;
	// ===================================
	}

	




	return 0;
}