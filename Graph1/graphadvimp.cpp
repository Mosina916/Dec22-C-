#include<iostream>
#include<list>
#include <unordered_map>
using namespace std;
class Graph{
	unordered_map<string,list<string> > h;

public:
	

	void addedge(string u,string v,bool bird=false){//u-->0 v-->1
		h[u].push_back(v);
		if(bird==true){
			h[v].push_back(u);

		}
		

	}

	void print(){

		for(auto x:h){
			cout<<x.first<<" : ";
		for(string p:x.second){
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
	Graph g;
	g.addedge("trump","modi",true);
	g.addedge("putin","trump");
	g.addedge("putin","modi");
	g.addedge("putin","pope");
	g.addedge("modi","yogi",true);
	g.addedge("prabhu","modi");
	g.addedge("modi","yogi",true);
	g.addedge("yogi","prabhu");
	g.addedge("pope","");
	
	g.print();

	// i want adjecent nodes of 3
	// g.search(3);






	return 0;
}