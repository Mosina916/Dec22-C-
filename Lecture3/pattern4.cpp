// 5
// * * * * * * * * * 
//   * * * * * * * 
//     * * * * * 
//       * * * 
//         * 
#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;
	int rowno=1;
	while(rowno<=trows){//3<=4
		// ===================================
	// spaces
	int spc=1;
	while(spc<=rowno-1){//1<=2
		cout<<"  ";
		spc=spc+1;//2
	}

	// stars
	int stac=1;
	while(stac<=(2*(trows-rowno)+1)){
		cout<<"* ";
		stac=stac+1;

	}
	cout<<endl;
	rowno=rowno+1;//3

	// ===================================

	}

	
	
	

	




	return 0;
}