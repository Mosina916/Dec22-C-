#include<iostream>
#include<queue>
using namespace std;
#define Heap priority_queue<int,vector<int>, greater<int> >
void printheap(Heap h){///pass by val
	while(!h.empty()){
		cout<<h.top()<<" "; //0 1 2 3
		h.pop();

	}
	cout<<endl;


}
int main(){
	// heap sort
	Heap h;
	int k;
	cin>>k;//3
	int cou=1;
	int data;

	while(1){
		cin>>data;//3 13 4 16 9 -1

	if(data==-1){
		// tou print k largest
		printheap(h);
	}
	else{
		if(cou<=k){
			h.push(data);//3 13 4
		cou++;//4


		}
		else{
			if(data>h.top()){
				h.pop();
				h.push(data);
			}
		}
		
	}

	}
	

	




	


	return 0;
}