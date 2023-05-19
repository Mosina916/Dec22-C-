#include<iostream>
#include <unordered_map>
// #include <map>
#include <string>

using namespace std;

int main(){
	
	// hashmap-->2 types -->unordered map,ordered map
	// unordered_map<keyka dataype,valuekadatype> name;
	// unordered_map <string,string > h;
	// h.insert("abc","red");
	// h.insert("bca","blue");
	// h.insert("cfa","red");
	// h[1]=9;
	// h["abc"]="red";
	// h["bca"]="blue";
	// h["cfa"]="red";
	// h["cfa"]="blue";


	// arr is hashmap 
	// unordered_map<int,int> arr;

	// arr[1]=90;
	// arr[10000]=78;

	unordered_map<string,int> arr;0(1)
	// map<string,int> arr;//key k acc sorted aata hai
	// map mai insert deltiob searching time o(logn)
	arr["tushar"]=78;
	arr["ankit"]=90;
	arr["shubham"]=78;
	



	// abc->red
	// bca-->blue
	// cfa-->red



	for(auto x:arr){
		cout<<x.first<<"-->";
		cout<<x.second<<endl;
	}


	// h.print();
	// h.insert("qwe","pink");

	// for each loop
	//iterate over the whole hasdhmao and x will contain an enttity of h
	



	


	return 0;
}