// A-->UPPERCASe
// T-->//
// e-->lowercase
// w-->//
// /-->some other character
// A-Z-->UPPERCASe
// a-z-->lowercase
#include<iostream>
using namespace std;
int main(){
	char ch;
	cin>>ch;//b
	if(ch>='A' && ch<='Z'){//implicit type conversiom
		cout<<"UPPERCASE"<<endl;

	}
	else if(ch>='a' and ch<='z'){
		cout<<"lowercase"<<endl;

	}
	else{
		cout<<"some other character"<<endl;
	}


	// if(ch>=65 and ch<=90){//implicit type conversiom
	// 	cout<<"UPPERCASE"<<endl;

	// }
	// else if(ch>=97 and ch<=122){
	// 	cout<<"lowercase"<<endl;

	// }
	// else{
	// 	cout<<"some other character"<<endl;
	// }


	// 3rd way

	// islower(a)-->true
	// islower(T)-->false;
	// isupper(y)-->false;
	// isupper(A)--?true
	// int n=345345;
	// char ch;//HI
	// cin>>ch;//t
	// if(isupper(ch)){
	// 	cout<<"UPPERCASE"<<endl;
	// }
	// else if(islower(ch)){
	// 	cout<<"lowercase"<<endl;
	// }
	// else{
	// 	cout<<"some other character"<<endl;

	// }






	return 0;
}
