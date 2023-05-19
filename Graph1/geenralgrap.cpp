#include<iostream>
#include<list>
// #include <unordered_map>
#include <map>
using namespace std;
template<typename T>
class Graph{
	// unordered_map<T,list<T> > h;
	map<T,list<T> > h;

public:
	

	// void addedge(T u,T v,bool bird=false){//u-->0 v-->1
		void addedge(T u,T v,bool bird=true){
		h[u].push_back(v);
		if(bird==true){
			h[v].push_back(u);

		}
		

	}

	void print(){

		for(auto x:h){
			cout<<x.first<<" : ";
		for(auto p:x.second){
			cout<<p<<" ";

		}
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
	Graph<int>g;
	g.addedge(0,1);
	g.addedge(0,4);
	g.addedge(1,4);
	g.addedge(4,3);
	g.addedge(1,3);
	g.addedge(1,2);
	g.addedge(2,3);
	g.print();
	// Graph<string>g;
	// g.addedge("trump","modi",true);
	// g.addedge("putin","trump");
	// g.addedge("putin","modi");
	// g.addedge("putin","pope");
	// g.addedge("modi","yogi",true);
	// g.addedge("prabhu","modi");
	// g.addedge("modi","yogi",true);
	// g.addedge("yogi","prabhu");
	// g.addedge("pope","");
	
	// g.print();

	// i want adjecent nodes of 3
	// g.search(3);






	return 0;
}