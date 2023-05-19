#include<iostream>
#include<list>
using namespace std;
class Graph{
	// int*arr=new int[N];

	list<int>*l;
	int n;
public:
	Graph(int N){
		n=N;
		l=new list<int>[N];

	}


	void addedge(int u,int v,bool birde=true){//u-->0 v-->1
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
	Graph g(5);
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);
	g.print();

	// i want adjecent nodes of 3
	// g.search(3);






	return 0;
}