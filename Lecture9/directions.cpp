#include<iostream>
using namespace std;
int main(){
	int x=0,y=0;//because person is at origin

	char ch;
	// cin>>ch;//'S'
	ch=cin.get();


	// loop
	while(ch!='\n'){
		if(ch=='E'){
		// x=x+1; or
		x++;
	}
	else if(ch=='W'){
		x--;
	}
	else if(ch=='N'){
		y++;
	}
	else {
		y--;
	}
	// cin>>ch;//'S' 'w'
	ch=cin.get();

	}

	cout<<x<<" "<<y<<endl;//2 -2


	if(x>=0 and y>=0){
		// i am in ist quadrant
		// pehle E print karo x times
		for(int c=1;c<=x;c++){
			cout<<'E';
		}
		// pehle N print karo y times
		for(int c=1;c<=y;c++){
			cout<<'N';
		}


	}
	else if(x<=0 and y>=0){
		// i am in 2nd quadrant
		// pehle N print karo y times
		for(int c=1;c<=y;c++){
			cout<<'N';
		}
		// pehle W print karo x times but x is -ive x
		for(int c=1;c<=abs(x);c++){
			cout<<'W';
		}


		
	}
	else if(x<=0 and y<=0){
		// i am in 3rd quad quadrant
		// pehle S print karo y times but y is -ive y
		for(int c=1;c<=abs(y);c++){
			cout<<'S';
		}
		// pehle W print karo x times but x is -ive x
		for(int c=1;c<=abs(x);c++){
			cout<<'W';
		}

		
	}
	else{
		// i am 4th quadrant
		// pehle E print karo x times
		for(int c=1;c<=x;c++){
			cout<<'E';
		}
		// pehle S print karo y times but y is -ive y
		for(int c=1;c<=abs(y);c++){
			cout<<'S';
		}
	}


	cout<<endl;








	




	return 0;
}