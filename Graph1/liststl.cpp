#include<iostream>
#include<list>
using namespace std;
int main(){
	// vector<dt> name;
	list<int> l;
	l.push_back(7);
	l.push_back(5);
	l.push_back(3);//7 5 3

	for(auto x:l){
		cout<<x<<" ";
	}
	cout<<endl;





	return 0;
}