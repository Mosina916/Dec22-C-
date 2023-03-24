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
bool searchinllite(node*head,int key){
	node*temp=head;

	while(temp!=NULL){
		if(temp->data==key){
			return true;

	}
	temp=temp->next;

	}
	return false;
	

}
bool searchinllrec(node*head,int key){
	// base case 
	if(head==NULL){
		return false;

	}
	 // rec case
	if(head->data==key){
		return true;
	}
	return searchinllrec(head->next,key);
	

}
int lengthofll(node*head){
	int co=0;
	node*temp=head;

	while(temp!=NULL){
		co++;
	temp=temp->next;

	}
	return co;
	

}

int lengthofllrec(node*head){
	// base case
	if(head==NULL){
		return 0;
	}

	// rec case
	return 1+lengthofllrec(head->next);

}
void insertatanypos(node*&head,node*&tail,int d,int pos){
	if(pos==0){
		insertatfront(head,tail,d);
	}
	else if(pos>=lengthofll(head)){
		insertattail(head,tail,d);
	}
	else{
		node*temp=head;

		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}

		node* p=new node(d);//5

		p->next=temp->next;
		temp->next=p;

	}

}
void deleteattail(node*&head,node*&tail){

	if(head==NULL){
		// ll is empty
		return;

	}
	else if(head->next==NULL){
		// single node 
		// delete head;
		delete tail;
		tail=NULL;
		head=NULL;


	}
	else{
		// multiple nodes 
		node*temp=head;


		while(temp->next!=tail){
			temp=temp->next;

		}
		
		delete tail;
		tail=temp;
		tail->next=NULL;

	}
}

void deleteatanypos(node*&head,node*&tail,int pos){
	if(pos==0){
		deleteatfront(head,tail);
	}
	else if(pos>=lengthofll(head)-1){
		deleteattail(head,tail);

	}
	else{
		node*temp=head;
		for(int jump=1;jump<=pos-1;jump++){
			temp=temp->next;
		}
		node*t=temp->next;
		temp->next=t->next;
		// temp->next=temp->next->next;
		delete t;
		t=NULL;
	}
}
int main(){

	node*head=NULL;
	node*tail=NULL;

	insertatfront(head,tail,2);
	insertatfront(head,tail,3);
	insertatfront(head,tail,9);
	insertatfront(head,tail,6);//6 9 3 2
	// printll(head);
	insertattail(head,tail,18);//6 9 3 2 18
	// deleteatfront(head,tail);
	// deleteatfront(head,tail);
	insertatanypos(head,tail,5,3);//6 9 3 5 2 18
	deleteattail(head,tail);//6 9 3 5 2 

	printll(head);
	int key;
	cin>>key;
	if(searchinllrec(head,key)==true){
		cout<<"key is present"<<endl;
	}
	else{
		cout<<"key is not present"<<endl;
	}

	// if(searchinllite(head,key)==true){
	// 	cout<<"key is present"<<endl;
	// }
	// else{
	// 	cout<<"key is not present"<<endl;
	// }

		
// 




	return 0;
}