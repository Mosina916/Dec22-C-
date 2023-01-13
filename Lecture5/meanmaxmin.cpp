#include <iostream>
using namespace std;
int main(){
	int n;
	cin>>n;//4   
	int pehlano;
	cin>>pehlano;//2
	int abhtakkasum=pehlano;//2
	int abhtakkamax=pehlano;//2 
	int abhtakkamin=pehlano;//2 
	// bache n-1 numbers
	int i=1;
	// while(i<=n-1){//1<=3 2<=3 3<=3 
	while(i<n){//1<4 2<4 3<4 
		// loop
	int no;
	cin>>no;//3

	// sum
	abhtakkasum=abhtakkasum+no;//8

	// max
	if(no>abhtakkamax){//3>4
		abhtakkamax=no;//4
	}
	// min 
	if(no<abhtakkamin){//3<-1
		abhtakkamin=no;//-1
	} 

	i=i+1;//4

	}



	int mean=abhtakkasum/n;//2
	cout<<"mean is "<<mean<<endl;
	cout<<"max is "<<abhtakkamax<<endl;
	cout<<"min is "<<abhtakkamin<<endl;










	


	

	return 0;
}