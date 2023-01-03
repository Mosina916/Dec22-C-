#include<iostream>
using namespace std;
int main(){ //start of start 
	// int age=50;
	// if-->single task
	// int age;
	// cin>>age;//43

	// if(condition){

	// }
	// if(age>=40){//34>=40 -->false; brackets k ander nahi aata hai
	// 	// jab true hota hai tou brackets k ander aata hai
	// 	cout<<"person is elder"<<endl;
	// }


	// if else //2 times task

	// if(condition){


	// }
	// else{

	// }

	// if(age>=40){
	// 	cout<<"person is elder"<<endl;
	// }
	// else{
	// 	cout<<"person is younger"<<endl;
	// }



	// if elseif elseif ..... else //ek hi chalta hai
	// if(condition){

	// }
	// else if(condition){

	// }
	// else if(condition){

	// }
	// else if(condition){
		
	// }
	// .
	// .
	// .
	// .
	// .
	// .
	// else{

	// }


	// marks--> 100 90 -->grade A //if
	// marks--> 80 89 -->grade B //else if
	// marks--> 70 79 -->grade C ////else if
	// marks--> 60 69 -->grade D  ///else if

	// marks--> 50 99 -->grade E  ///else if
	// marks <60 -->fail //else

	// int marks;
	// cin>>marks;


	// if(90<=marks<=100){//invalid

	// 	cout<<"Grade A"<<endl;
	// }

	// 110
	// 97
	// if else if else if else agar ek statement chala uske neeche kuch b nahi chalega
	int marks;
	cin>>marks;//93

	if(marks>=90 and marks<=100){
		cout<<"Grade A"<<endl;
	}
	else if(marks>=80 and marks<=89){
		cout<<"Grade B"<<endl;

	}
	// 

	// else if(marks>=70 and marks<=79){
	// 	cout<<"Grade C"<<endl;

	// }
	// 75 79 -->c1
	// 70 74-->c2
	else if(marks>=75 and marks<=79){
		cout<<"Grade C1"<<endl;

	}
	else if(marks>=70 and marks<=74){
		cout<<"Grade C2"<<endl;

	}
	else if(marks>=60 and marks<=69){
		cout<<"Grade D"<<endl;

	}
	else if(marks>=50 and marks<=99){
		cout<<"Grade E"<<endl;

	}
	else{
		cout<<"fail"<<endl;
	}











	
	return 0;//end of the program


}