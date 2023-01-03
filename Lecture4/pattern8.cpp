
#include<iostream>
using namespace std;
int main(){
	int trows;
	cin>>trows;//7

			// *
		 //   ***
	  //     *****
	  //    *******
	// upper half k lye kaam
	// rowno 1 se rowno 4 tak
	int rowno=1;
	while(rowno<=(trows+1)/2){//5<=4
		// -================================
	// spaces 
	int sc=1;
	while(sc<=((trows+1)/2)-rowno){
		cout<<" ";
		sc=sc+1;
	}
	// stars
	int stc=1;
	while(stc<=2*rowno-1){
		cout<<"*";
		stc=stc+1;
	}
	cout<<endl;
	rowno=rowno+1;//5
	// -================================
	}
// jab rowno 5 hoga tou yahan aayega
	// lower half k lye kaam karugi
	// trows=6

	// r1 ***** 0 			5
	// r2  ***  1 			3
	// r3   *   2 			1
			// rowno-1;    trows-2*rowno+1

	rowno=1;
	while(rowno<=(trows)/2){
		// spaces
	int sp=1;
	while(sp<=rowno-1){
		cout<<" ";
		sp=sp+1;
	}
	// stars
	int star=1;
	while(star<=trows-2*rowno+1){
		cout<<"*";
		star=star+1;
	}
	cout<<endl;
	rowno=rowno+1;

	}

	return 0;
}