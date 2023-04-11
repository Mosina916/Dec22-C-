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
node* buildtree(){
	int d;
	cin>>d;//7
	if(d==-1){
		return NULL;
	}
	else{


	// to create node
	node*root=new node(d);//

	root->left=buildtree();//lst  NULL
	root->right=buildtree();//rst  200
	return root;
}

}

// print 
void preorder(node*root){
	// base case
	if(root==NULL){
		return;
	}

	cout<<root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void inorder(node*root){
	// base case
	if(root==NULL){
		return;
	}

	
	inorder(root->left);
	cout<<root->data<<" ";
	inorder(root->right);
}

void postorder(node*root){
	// base case
	if(root==NULL){
		return;
	}

	
	postorder(root->left);
	
	postorder(root->right);
	cout<<root->data<<" ";
}

int countnode(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// rec case

	return countnode(root->left)+countnode(root->right)+1;
}

int sumofnode(node*root){
	// base case
	if(root==NULL){
		return 0;
	}


	// rec case

	return sumofnode(root->left)+sumofnode(root->right)+root->data;
}

bool searchinabtree(node*root,int key){
	// base case
	if(root==NULL){
		return false;
	}


	// rec case

	if(root->data==key||searchinabtree(root->left,key)||searchinabtree(root->right,key)){
		return true;
	}

	return false;


}

int heightoftree(node*root){
	// base case
	if(root==NULL){
		return 0;
	}



	// rec case
	return max(heightoftree(root->left),heightoftree(root->right))+1;



}
// tc o(n^2)
int diameter(node*root){
	// base case
	if(root==NULL){
		return 0;
	}

	// rec case
	int op1=diameter(root->left);//3
	int op2=diameter(root->right);//2
	int op3=heightoftree(root->left)+heightoftree(root->right);//1 node k lye n nodes  iterate kar raha hai
	return max(op1,max(op2,op3));
}

class p{
	public:
	int hei;
	int dia;

	p(){
		hei=0;
		dia=0;

	}
};
// tc o(n)
p fastdiameter(node*root){
	p n;

	// base case
	if(root==NULL){
		return n;
	}


	// rec case
	p x=fastdiameter(root->left);
	p y=fastdiameter(root->right);

	n.hei=max(x.hei,y.hei)+1;

// n ka dia set karne k lye

	int op1=x.dia;
	int op2=y.dia;
	int op3=x.hei+y.hei;//1 node k lye 2 nodes sirf iterate kar raha hai

	n.dia=max(op1,max(op2,op3));

	return n;
}

void mirror(node*root){
	// base case
	if(root==NULL){
		return;
	}


	// rec case

	swap(root->left,root->right);
	mirror(root->left);
	mirror(root->right);
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
int main(){
	// node x(4);

	node*root=buildtree();//300

	levelwise(root);

	// cout<<diameter(root)<<endl;

	// p a=fastdiameter(root);

	// cout<<"height is "<<a.hei<<endl;
	// cout<<"dia is "<<a.dia<<endl;

	// mirror(root);

	// preorder(root);

	// cout<<endl;


	// cout<<"height is "<<heightoftree(root)<<endl;



	return 0;
}