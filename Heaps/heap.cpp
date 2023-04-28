#include<iostream>
#include<vector>
using namespace std;
class Minheap{
	vector<int> v;
public:
	Minheap(){
		v.push_back(-1);
	}

	// insert-->push
	void insert(int data){
		v.push_back(data);//o(1)
		int child=v.size()-1;
		while(child!=1){
			int parent=child/2;//humne 1 base indexing choose kri
			if(v[parent]>v[child]){
				swap(v[parent],v[child]);

			}
			child=parent;
		}
	}
	void heapify(int index){//1 2  5
		int li=2*index;//2 4  //10
		int ri=2*index+1;//3 5 //11
		int minindex=index;//1 2  5

		if(li<=v.size()-1 and v[minindex]>v[li]){
			minindex=li;
		}
		if(ri<=v.size()-1 and v[minindex]>v[ri]){
			minindex=ri;
		}

		if(minindex!=index){//base case

			swap(v[minindex],v[index]); //19 19
		heapify(minindex);//5


		}
		



	}

	// delete -->pop
	void pop(){
		swap(v[1],v[v.size()-1]);//o(1)
		v.pop_back();
		// wapas heap banane k lye heapify
		heapify(1);
	}


	// top min
	int top(){
		return v[1];
	}

	bool empty(){
		return v.size()==1;
	}

	int size(){
		return v.size()-1;
	}
};
int main(){
	// heap sort
	Minheap h;
	h.insert(1);
	h.insert(2);
	h.insert(3);
	h.insert(17);
	h.insert(19);
	h.insert(36);
	h.insert(7);
	h.insert(25);
	h.insert(100);
	h.insert(0);

	while(!h.empty()){
		cout<<h.top()<<" "; //0 1 2 3
		h.pop();

	}
	




	return 0;
}