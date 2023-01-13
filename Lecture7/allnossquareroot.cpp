#include<iostream>
using namespace std;
int main(){
	int no;
	cin>>no;//13
	int noofdecipoints;
	cin>>noofdecipoints; //3
	float i=0;

	int times=1;
	float inc=1;

	while(times<=noofdecipoints+1){ //1<=4 2<=4 3<=4 4<=4
		while(i*i<=no){  //3*3<=13 4*4<=13
		i=i+inc;// i=i+0.1;   i=i+0.01;  i=i+0.001;
	}
	i=i-inc;// i=i-0.1;  i=i-0.01;  i=i-0.001;
	inc=inc/10;//1/10-->0.1/10-->0.01/10-->0.001


		times=times+1;//2  3 4
	}


	cout<<i<<endl;


	// while(times<=noofdecipoints+1){ //1<=4 2<=4 3<=4 4<=4
	// 	while(i*i<=no){  //3*3<=13 4*4<=13
	// 	i=i+1;// i=i+0.1;   i=i+0.01;  i=i+0.001;
	// }
	// i=i-1;// i=i-0.1;  i=i-0.01;  i=i-0.001;



	// 	times=times+1;//2  3 4
	// }





	// float i=0;

	








	return 0;
}
