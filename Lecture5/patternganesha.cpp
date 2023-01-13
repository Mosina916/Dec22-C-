#include <iostream>
using namespace std;
int main(){

	int trows;
	cin>>trows;//9
	// row no 1
	cout<<'*';
	int sp=1;
	while(sp<=((trows-1)/2)-1){
		cout<<" ";
		sp=sp+1;
	}
	int rs=1;
	while(rs<=(trows+1)/2){
		cout<<'*';
		rs=rs+1;
	}



	cout<<endl;

	// row 2 to 4  same symmtry
	int rowno=2;
	while(rowno<=(trows-1)/2){//4<=4
			cout<<'*';
	int spc=1;
	while(spc<=((trows-1)/2)-1){
		cout<<" ";
		spc=spc+1;
	}
	cout<<'*';
	cout<<endl;
	rowno=rowno+1;

	}
	// row no 5
	int starc=1;
	while(starc<=trows){
		cout<<'*';
		starc=starc+1;

	}
	cout<<endl;

	// row 6 to 8  same symmtry
	rowno=((trows+1)/2)+1;//6
	while(rowno<=trows-1){
		// spaces
	int spac=1;
	while(spac<=(trows-1)/2){
		cout<<" ";
		spac=spac+1;
	}

	// star 1
	cout<<'*';
	// spaces
	int spa=1;
	while(spa<=((trows-1)/2)-1){
		cout<<" ";
		spa=spa+1;
	}

	// star 1
	cout<<'*';
	cout<<endl;
	rowno=rowno+1;

	}


	// lst row
	int stars=1;
	while(stars<=(trows+1)/2){
		cout<<'*';
		stars=stars+1;
	}

	// spaces
	int spaa=1;
	while(spaa<=((trows-1)/2)-1){
		cout<<" ";
		spaa=spaa+1;
	}
	cout<<'*'<<endl;


	













	return 0;
}