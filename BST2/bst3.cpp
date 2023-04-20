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

node* deletioninbst(node*root,int key){
	// base case
	if(root==NULL){
		return NULL;

	}


	// rec case
	// key lie in lst
	if(key<root->data){
		root->left=deletioninbst(root->left,key);
		return root;
	}
	// key lie rst
	else if(key>root->data){
		root->right=deletioninbst(root->right,key);
		return root;
	}

	// key is at root node 
	else{
		// root ka lst and rst doesn;t exist
		if(root->left==NULL and root->right==NULL){
			delete root;
			root=NULL;
			return root;
		}
		// case 2:  root ka lst exist and rst doesn;t exist
		else if(root->left!=NULL and root->right==NULL){
			node*temp=root->left;
			delete root;
			root=NULL;
			return temp;
		}

		// case 3:  root ka lst exist and rst doesn;t exist
		else if(root->left==NULL and root->right!=NULL){
			node*temp=root->right;
			delete root;
			root=NULL;
			return temp;

		}
		else{
			// nboth lst and rst exist
			// // i am choosing max of lst as root
			node*temp=root->left;

			while(temp->right!=NULL){
				temp=temp->right;

			}
			swap(root->data,temp->data);
			// delete temp;
			root->left=deletioninbst(root->left,key);
			return root;

			// i am choosing min of rst as root
			// node*temp=root->right;

			// while(temp->left!=NULL){
			// 	temp=temp->left;

			// }
			// swap(root->data,temp->data);
			// // delete temp;
			// root->right=deletioninbst(root->right,key);
			// return root;



		}
	}
}


// right view
void rightview(node*root,int cl,int &mlptn){//1 0 ,2 1,3 2
	if(root==NULL){
		return;
	}
	if(mlptn<cl){
		cout<<root->data<<" ";//8 10 14 13 8
	mlptn++;// 1 2 3 4 5

	}
	

	rightview(root->right,cl+1,mlptn);
	rightview(root->left,cl+1,mlptn);

}

// left view
void leftview(node*root,int cl,int &mlptn){//1 0 ,2 1,3 2
	if(root==NULL){
		return;
	}
	if(mlptn<cl){
		cout<<root->data<<" ";//8 10 14 13 8
	mlptn++;// 1 2 3 4 5

	}
	leftview(root->left,cl+1,mlptn);
	leftview(root->right,cl+1,mlptn);

}




int main(){
	node*root=buildbst();
	int k=0;
	// rightview(root,1,k);
	leftview(root,1,k);
	// int key;
	// cin>>key;

	// deletioninbst(root,key);
	// levelwise(root);


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