#include<iostream>
using namespace std;
class node{
public:
	string k;
	string v;
	node*next;

	node(string key,string val){
		k=key;
		v=val;
		next=NULL;
	}
};
class hashmap{
	node**arr;
	int ts;
	int cs;
public:
	hashmap(int size=7){
		arr=new node*[size];
		cs=0;
		ts=size;
		for(int i=0;i<size;i++){
			arr[i]=NULL;
		}

	}
	int hashfunction(string s){//abc
		int ans=0;
		int mult=1;
		for(int i=0;i<s.length();i++){
			ans=(ans%ts+(s[0]%ts*mult%ts)%ts)%ts;//3
		mult=(mult*29)%ts;//29

		}

		return ans;//4

	}

	void rehashing(){
		node**oldarr=arr;
		int oldts=ts;

		arr=new node*[ts*2];
		ts=2*ts;//14
		for (int i = 0; i <ts; ++i)
		{
			arr[i]=NULL;
		}
		
		cs=0;

		// copy oldarr se elements ko arr mai
		for(int i=0;i<oldts;i++){
			node*head=oldarr[i];//600;

		while(head!=NULL){
			insert(head->k,head->v);
		head=head->next;//NULL

		}

		}
		
		



	}

	// insert
	void insert(string ke,string valu){
		int indx=hashfunction(ke);//qwe->
		node*n=new node(ke,valu);
		// insert at front
		n->next=arr[indx];
		arr[indx]=n;
		cs++;//
		if(cs/(ts*1.0)>=0.5){//3/7.0
			rehashing();

		}



	}

	void print(){
		for(int i=0;i<ts;i++){
			cout<<i<<" : ";

		node*head=arr[i];//
		while(head!=NULL){
			cout<<"( "<<head->k<<", "<<head->v<<"),";
			head=head->next;

		}
		cout<<endl;

		}
		

	}


	bool search(string key){
		int index=hashfunction(key);//cfa
		node*head=arr[index];
		while(head!=NULL){
			if(head->k==key){
				return true;
			}
			head=head->next;
		}
		return false;


	}

};
int main(){
	hashmap h;
	h.insert("abc","red");
	h.insert("bca","blue");
	h.insert("cfa","red");
	// h.print();
	h.insert("qwe","pink");//rehashing
		h.print();

	// if(h.search("cfa")==true){
		if(h.search("cffa")==true){
		cout<<"key is present"<<endl;
	}
	else{

		cout<<"key is not present"<<endl;
	}

	for(auto x:h){
		cout<<x.first<<" : ";//3 :

		for(auto p:x.second){//
			cout<<"( "<<p.first<<", "<<p.second<<")";



		}
		cout<<endl;
	}






	return 0;
}