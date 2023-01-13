#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main(){
	// // int no;
	// // cin>>no;//13

	// // float i=0;

	// while(i*i<=no){  //3*3<=13 4*4<=13
	// 	i=i+1;//1 2 3 4
	// }
	// i=i-1;//3
	// // pehle dec point k lye

	// while(i*i<=no){//3*3<=13 //3.1*3.1<=13 3.6*3.6<=13  3.7*3.7<=13
	// 	i=i+0.1;//3.1 3.2 3.3... 3.7

	// }
	// i=i-0.1;//3.6


	// // 2nd  dec point k lye
	// while(i*i<=no){   //3.6*3.6<=13 3.61*3.61<=13

	// i=i+0.01;//3.61
	// }

	// i=i-0.01;//3.60


	// // / 3rd  dec point k lye
 
	// while(i*i<=no){//3.60*3.60<=13   ----  3.605*3.605<=13  3.606*3.606<=13
	// 	i=i+0.001;//3.605  3.606

	// }

	// i=i-0.001;


	// cout<<i<<endl;


// sqrt(no)
	// cout<<sqrt(9)<<endl;


	int no;
	cin>>no;//13
	int uptohowmanydecipoints;
	cin>>uptohowmanydecipoints;

	cout << setprecision(uptohowmanydecipoints) << sqrt(no)<< endl;//3.0


	// cout << fixed << setprecision(4) << sqrt(9)<< endl;//3.000
	// cout << fixed << setprecision(4) << sqrt(13)<< endl;//3.000




	return 0;
}
