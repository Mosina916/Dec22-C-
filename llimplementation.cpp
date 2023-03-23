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
void insertatfront(node*&head,node*&tail,int d){
	// case 1 ll is empty
	// if(head==NULL and tail==NULL){
	if(head==NULL){
		node*p=new node(d);
		// node y(d);//i will not create object statically i will create it dynamically
		head=p;
		tail=p;
		

	}
	// agar ll khali nahi hoga
	else{
		node*p=new node(d);
		p->next=head;
		head=p;


	}

}
void printll(node*head){
	node*temp=head;

// loop
	while(temp!=NULL){
		cout<<temp->data<<" ";
	temp=temp->next;//NULL

	}
	cout<<endl;
	
}
// datatype*nameofptr;
void insertattail(node*&head,node*&tail,int d){
	// if ll is khali
	if(head==NULL){
		node*p=new node(d);
		head=p;
		tail=p;

	}

	// if ll is not empty
	else{
		node*p=new node(d);
		tail->next=p;
		tail=p;
	}
}
void deleteatfront(node*&head,node*&tail){
	// if ll is empty
	if(head==NULL){
		return;
	}
	// if ll has only 1 node
	else if(head->next==NULL){
		delete head;
		head=NULL;
		tail=NULL;
	}
	// if ll has multiple node
	else{
		node*temp=head->next;//700
		delete head;
		head=temp;

	}

}
int main(){

	node*head=NULL;
	node*tail=NULL;

	insertatfront(head,tail,2);
	insertatfront(head,tail,3);
	insertatfront(head,tail,9);
	insertatfront(head,tail,6);
	// printll(head);
	insertattail(head,tail,18);
	deleteatfront(head,tail);
		printll(head);

		
// 




	return 0;
}