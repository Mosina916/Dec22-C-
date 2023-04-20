#include<iostream>

#include<queue>
using namespace std;
class node{
	public:
	int data;
	node*left;
	node*right;

	node(int d){
		data=d;
		left=NULL;
		right=NULL;
	}
};
// 8 10 1 -1 -1 6 4 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1

int heightoftree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case
	return max(heightoftree(root->left),heightoftree(root->right))+1;



}


// levelwise

void levelwise(node*root){
	queue<node*> q;
	q.push(root);//8 NULL
	q.push(NULL);


// loop
	while(!q.empty()){
		node*x=q.front();//NULL
	q.pop();
	if(x==NULL){
		cout<<endl;
		if(!q.empty()){
			q.push(NULL);

		}
		

	}
	else{
		cout<<x->data<<" ";//8

	if(x->left!=NULL){
		q.push(x->left);
	}

	if(x->right!=NULL){
		q.push(x->right);
	}

	}

	}

}
node* insertinbst(node*root,int data){
	if(root==NULL){
		root=new node(data);
		return root;
	}
	else if(data>root->data){//17>10
		// rst mai insert karlo
		root->right=insertinbst(root->right,data);//NULL 10
		return root;

	}
	else{
		root->left=insertinbst(root->left,data);//
		return root;
	}
}

node* buildbst(){
	node*root=NULL;
	int data;
	cin>>data;//8


// loop
	while(data!=-1){
		root=insertinbst(root,data);//300
	cin>>data;//10 3 17 -1


	}

	return root;



}

bool searchinbst(node*root,int key){
// base case
	if(root==NULL){
		return false;
	}


	// rec case
	if(root->data==key){
		return true;
	}
	else if(key<root->data){
		// only call lst
		return searchinbst(root->left,key);
	}
	else{
		return searchinbst(root->right,key);
	}

}
// 8 10 14 3 13 6 1 7 4 -1
class pai{
public:
	bool isbal;
	int hei;
	pai(){
		isbal=true;
		hei=0;

	}

};
// o(n)
pai isbalanced(node*root){
	pai l;
	// base case
	if(root==NULL){
		return l;

	}


	// rec case
	pai x=isbalanced(root->left);
	pai y=isbalanced(root->right);
	l.hei=max(x.hei,y.hei)+1;
	if(x.isbal==true and y.isbal==true and abs(x.hei-y.hei)<=1){
		l.isbal=true;
	}
	else{
		l.isbal=false;
	}
	return l;

}

// tc: o(n)
bool checkbst(node*root,int min=INT_MIN,int max=INT_MAX){
	// base case
	if(root==NULL){
		return true;
	}

	// rec case
	if(root->data>=min and root->data<=max and checkbst(root->left,min,root->data) and checkbst(root->right,root->data+1,max)){
		return true;
	}
	return false;

}

int arr[]={1,2,3,4,5,6,7,8};
node* buildbstusingarr(int s,int e){
	// base case
	if(s>e){
		return NULL;
	}


	// rec case
	int mid=(s+e)/2;
	node*root=new node(arr[mid]);
	root->left=buildbstusingarr(s,mid-1);
	root->right=buildbstusingarr(mid+1,e);
	return root;
}

class linkl{
public:
	node*head;
	node*tail;
	linkl(){
		head=NULL;
		tail=NULL;
	}

};


linkl convertbstintosortedll(node*root){
	linkl l;
	// base case
	if(root==NULL){
		return l;
	}


	// rec case
	// case 1: neither lst nor rst exist
	if(root->left==NULL and root->right==NULL){
		l.head=root;
		l.tail=root;
		// return l;
	}
	// case 2: only lst not rst exist
	else if(root->left!=NULL and root->right==NULL){
		linkl le=convertbstintosortedll(root->left);
		le.tail->left=root;
		root->left=NULL;
		l.head=le.head;
		l.tail=root;
		// return l;
	}
	// case 3: not lst only rst exist
	else if(root->left==NULL and root->right!=NULL){
			linkl ri=convertbstintosortedll(root->right);
			root->left=ri.head;
			l.head=root;
			l.tail=ri.tail;
			// return l;
	}	
	// case both lst and rst exist
	else{
		linkl le=convertbstintosortedll(root->left);

		linkl ri=convertbstintosortedll(root->right);
		le.tail->left=root;
		root->left=ri.head;
		l.head=le.head;
		l.tail=ri.tail;
		// l.tail->right=NULL;
		// return l;

	}
	return l;

}
void printll(node*root){

	while(root!=NULL){
		cout<<root->data<<" ";
	root=root->left;

	}

	cout<<endl;
}





int main(){
	node*root=buildbst();
	levelwise(root);
	linkl l=convertbstintosortedll(root);
	printll(l.head);


	// int n=sizeof(arr)/sizeof(int);
	// node*root=buildbstusingarr(0,n-1);
	// levelwise(root);

	// node*root=buildbst();
	// if(checkbst(root)==true){
	// 	cout<<"yes bs tree "<<endl;
	// }
	// else{
	// 	cout<<"not bs tree "<<endl;
	// }
	// pai x=isbalanced(root);
	// cout<<x.hei<<endl;
	// if(x.isbal==true){
	// 	cout<<"yes balanced tree "<<endl;
	// }
	// else{
	// 	cout<<"not balanced tree "<<endl;
	// }
	
	


	return 0;
}