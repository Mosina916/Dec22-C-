#include<iostream>
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

int main(){
	// node x(4);

	node*root=buildtree();//300

	cout<<"height is "<<heightoftree(root)<<endl;

	// cout<<"count of nodes are "<<countnode(root)<<endl;

	// cout<<"count of nodes are "<<sumofnode(root)<<endl;
	// int key;
	// cin>>key;
	// if(searchinabtree(root,key)==true){
	// 	cout<<"key is present"<<endl;

	// }
	// else{
	// 	cout<<"key is not present"<<endl;

	// }
	// cout<<"pre order is : ";
	// preorder(root);
	// cout<<endl;
	// cout<<"in order is : ";
	// inorder(root);
	// cout<<endl;
	// cout<<"post order is : ";
	// postorder(root);
	// cout<<endl;



	return 0;
}