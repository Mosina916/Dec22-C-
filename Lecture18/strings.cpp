#include<iostream>
#include<cstring>
using namespace std;
int main(){
	// string is a char array terminated by null
	// declartion of string
	// string s="hello";

	// string s("hello world");
	// char arr[100];
	// cin.getline(arr,100);//in case of char arrays



	// string s;
	// getline(cin,s);
	// // cin>>s;//hello world-->o/p hello
	// // getline(cin,stringname);//to take i/p with spaces in a string 


	// cout<<s<<endl;
	// {'h','e','l','l','o','\0'}


	// properties of string 
	// string s1="pen";
	// string s2="dog";
	// string s3=s1+s2;
	// cout<<s3<<endl;
	//if i want append +
	// cout<<s1+s2<<endl;//pendog
	// cout<<s2+s1<<endl;//dogpen


	// 1>2 1<=5 4<6 9>=3 != ==
	// pen==cat pen!=cat pen<cat  pen>cat

	// string s1="wpencil"; //perefrence
	// string s2="rat";

	// string s1="pencil"; //perefrence
	// string s2="pen";
	// if(s1!=s2){
	// 	cout<<"hello"<<endl;
	// }
	// else{
	// 	cout<<"world"<<endl;
	// }


	// string substring 

	// string s="elephant";

	// 
	// stringname.substr(index);
	// cout<<s.substr(2)<<endl;
	// cout<<s.substr(4)<<endl;

	// stringname.substr(index,noofcharater);

	// cout<<s.substr(2,4)<<endl;


	// push_back
	string s="penc";
	s.push_back('i');
	s.push_back('l');//push_back works for single character
	// pen
	cout<<s.length()<<endl;
	cout<<s.front()<<endl; //p
	cout<<s.back()<<endl;//l
	// cout<<s<<endl;

	// s.pop_back();
	// s.pop_back();
	// s.pop_back();
	// cout<<s<<endl;






	return 0;
}