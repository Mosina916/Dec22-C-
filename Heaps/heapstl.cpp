#include<iostream>
#include<queue>
using namespace std;
#define Heap priority_queue<int,vector<int>, greater<int> >
int main(){
	// heap sort
	// Minheap h;
	// vector<int> v;
	// priority_queue<int> h;//max heap
	Heap h;
	h.push(1);
	h.push(2);
	h.push(3);
	h.push(17);
	h.push(19);
	h.push(36);
	h.push(7);
	h.push(25);
	h.push(100);
	h.push(0);

	while(!h.empty()){
		cout<<h.top()<<" "; //0 1 2 3
		h.pop();

	}
	




	return 0;
}