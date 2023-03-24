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

int lengthofll(node*head){
	int co=0;
	node*temp=head;

	while(temp!=NULL){
		co++;
	temp=temp->next;

	}
	return co;
	

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

// bool searchinllite(node*head,int key){
// 	node*temp=head;

// 	while(temp!=NULL){
// 		if(temp->data==key){
// 			return true;

// 	}
// 	temp=temp->next;

// 	}
// 	return false;
	

// }

bool searchinllite(node*head,int key){

	while(head!=NULL){
		if(head->data==key){
			return true;

	}
	head=head->next;

	}
	return false;
	

}

// // odd ll 
// int midpointofll(node*head){
// 	node*slow=head;
// 	node*fast=head;

// 	while(fast->next!=NULL){
// 		fast=fast->next->next;//3
// 	slow=slow->next;

// 	}
// 	return slow->data;
	
// }

// // even ll  2nd mid dedega
// int midpointofll(node*head){
// 	node*slow=head;
// 	node*fast=head;

// 	while(fast!=NULL){
// 		fast=fast->next->next;//3
// 	slow=slow->next;

// 	}
// 	return slow->data;
	
// }

// even ll  ist mid dedega
int midpointofll(node*head){
	node*slow=head;
	node*fast=head->next;

	while(fast!=NULL and fast->next!=NULL){
	// while( fast->next!=NULL and fast!=NULL){
		fast=fast->next->next;//7 //seg fault
	slow=slow->next;

	}
	return slow->data;
	
}

// bubble sort
// 3 7 2 4
// 	for(int i=0;i<=tb-2;i++){ //i-->4<=3

// 	for(int j=0;j<=tb-2-i;j++){//5-2-3-->0
// 		if(arr[j]>arr[j+1]){
// 			swap(arr[j],arr[j+1]);
// 		}
// 	}
// 	2 3 4 7
// }

void bubblesort(node*head,node*tail){
	for(int i=1;i<=lengthofll(head)-1;i++){
		for(node* j=head;j!=tail;j=j->next){
			if(j->data>j->next->data){
				swap(j->data,j->next->data);
			}
		}
	}
}



int main(){

	node*head=NULL;
	node*tail=NULL;//ll is empty

	int n;//5
	cin>>n;
	for (int i = 0; i <n; ++i)
	{
		int d;
		cin>>d;//5 7
		insertattail(head,tail,d); //5 7 3 8 1 
	}

	cout<<"mid point is "<<midpointofll(head)<<endl;


	// searchinllite(head,8);
	// if(marks>=100 and marks<=90){

	// }
	// if(marks<=90 and marks>=100){
		
	// }

	// printll(head);//unsorted
	// cout<<endl;
	// bubblesort(head,tail);
	// printll(head);//sorted




		
// 




	return 0;
}