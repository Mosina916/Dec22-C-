#include<iostream>
#include<list>
using namespace std;
class Graph{
	// int*arr=new int[N];

	list<char>*l;
	int n;
public:
	Graph(int N){
		n=N;
		l=new list<char>[N];

	}


	void addedge(char u,char v,bool birde=true){//u-->0 v-->1
		l[u].push_back(v);
		if(birde==true){
			l[v].push_back(u);
		}



	}

	void print(){
		for(int i=0;i<n;i++){
			cout<<i<<" : ";
		for(auto x:l[i]){
			cout<<x<<" ";

		}//1 4

		cout<<endl;


		}

	}
	// void search(int a){
	// 	for(auto x:l[a]){
	// 		cout<<x<<" ";

	// 	}
	// 	cout<<endl;
	// }




};
int main(){
	Graph g(3);
	g.addedge('a','b');
	g.addedge('b','c');
	g.addedge('c','a');
	
	g.print();

	// i want adjecent nodes of 3
	// g.search(3);






	return 0;
}