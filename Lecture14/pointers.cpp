#include<iostream>
using namespace std;
int main(){
	// int a=10;
	// float f=56.78;
	// double d=53.2453;
	// bool b=true;

	// cout<<a<<endl;
	// cout<<f<<endl;
	// cout<<d<<endl;
	// cout<<b<<endl;//it will not print true but will print 1 

// &a-->starting byte ka value/address

	// cout<<&a<<endl;//0x....
	// cout<<&f<<endl;//0x....
	// cout<<&d<<endl;//0x....
	// cout<<&b<<endl;//0x....


	// cout<<sizeof(&a)<<endl;//0x....
	// cout<<sizeof(&f)<<endl;//0x....
	// cout<<sizeof(&d)<<endl;//0x....
	// cout<<sizeof(&b)<<endl;//0x....



// pointer -->jo kisi ka adsress store karta hai
	// // datatype*nameofbucket=&variable;
	// int a=10;
	// int*aptr=&a;
	// float*fptr=&f;
	// double*dptr=&d;
	// bool*bptr=&b;//single pointer

	// // &a is same as aptr

	// // cout<<aptr<<endl;
	// // cout<<fptr<<endl;
	// // cout<<dptr<<endl;
	// // cout<<bptr<<endl;

	// // cout<<&aptr<<endl;
	// // datatype* nameofbucket=&variable;
	// int**xptr=&aptr;//double pointer

	// double**qptr=&dptr;

	// double***mptr=&qptr;//triple pointer
	// double****gptr=&mptr;//


// 	char ch='A';
// 	// cout<<ch<<endl;//'A'
// 	// cout<<sizeof(ch)<<endl;//1
// 	// cout<<sizeof(&ch)<<endl;//8
// // compilers treat characters differently 
// 	// instead of printing address by &ch it gives value at ch
	
// 	cout<<&ch<<endl;//0x...... value at the ch
// // but i want to print addrees of ch -->fooling of compilerd
// 	// cout<<(int*)&ch<<endl;
// 	// cout<<(float*)&ch<<endl;
// 	// cout<<(bool*)&ch<<endl;
// 	// cout<<(double*)&ch<<endl;

// 	cout<<(void*)&ch<<endl;//fooling of compiler 


	// int *aptr=&a;//pointer creation 
	// int *bptr=&b;
	// multiple pinters creation
	// int*aptr,*bptr,*cptr;

	// *aptr-->a

	// cout<<*aptr<<endl;//derefrence wala star


	// int a=10;
	// int*aptr=&a;//pointer creation
	// int**xptr=&aptr;//double pointer
	// // (*xptr)-->aptr
	// *aptr-->a

	// *(*xptr)-->a


	// int***mptr=&xptr;//double pointer

	// *mptr-->xptr

	// (*xptr)-->aptr
	// *aptr-->a

	// *(*(*mptr))-->a

	// int a=10;
	// int *aptr=&a;

	// cout<<aptr<<endl;
	// cout<<aptr+1<<endl;
	// cout<<aptr+2<<endl;
	// cout<<aptr+3<<endl;

// 0x7ffeed97d8e8
// 0x7ffeed97d8ec
// 0x7ffeed97d8f0
// 0x7ffeed97d8f4
// // 

	// bool b=true;
	// bool* bptr=&b;
	// cout<<bptr<<endl;
	// cout<<bptr+1<<endl;
	// cout<<bptr+2<<endl;
	// cout<<bptr+3<<endl;







	return 0;
}