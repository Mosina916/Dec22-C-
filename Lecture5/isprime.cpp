#include <iostream>
using namespace std;
int main(){
	// int no=7;
	// while(i<=no-1){//2<=6 3<=6 4<=6 5<=6 6<=6
	// 	if(no%i==0){//7%2==0  7%3==0 7%4==0 7%5==0 7%6==0

	// 	}
	// 	i=i+1;//7

	// }
	// cout<<"prime"<<endl;
	// int no=6;
	int no;
	cin>>no;
	int i=2;//initilization
	while(i<=no-1){//2<=5 
		if(no%i==0){//6%2==0 
		 cout<<"not prime"<<endl;
		 return 0;
		}
	
		i=i+1;//7

	}
	cout<<"prime"<<endl;

	return 0;
}