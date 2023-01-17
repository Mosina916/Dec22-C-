#include<iostream>
using namespace std;
// Count number of characters till you read a $.
int main(){
	char ch;
	int count=0;
	// loop
	// cin>>ch;//'h'
	ch=cin.get();
	while(ch!='$'){
		count=count+1;//5
		ch=cin.get();
		// cin>>ch;//'e' l l o '$'

	}
	cout<<count<<endl;

	// cin>>ch;//'h'
	// while(-4){
	// 	if(ch=='$'){
	// 		break;
	// 	}
	// 	count=count+1;//5
	// 	cin>>ch;//'e' l l o '$'

	// }
	// cout<<count<<endl;
	



	return 0;
}