#include <iostream>
using namespace std;
// self refrential class
class node{
public:
	int data;
	node*next;
	node(int d){
		data=d;
		next=NULL;


	}



};
// datatype*nameofptr;
int main(){

	node x(9);
	node y(3);
	x.next=&y;
	cout<<x.data<<endl;
	cout<<x.next->data<<endl;//400->data
	// cout<<(*x.next).data<<endl;//*400-->y



	return 0;
}