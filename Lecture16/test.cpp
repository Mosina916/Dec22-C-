#include<iostream>
using namespace std;
int main(){
	// how to declare char arrays
	// datatype nameofarr[size];
	// char arr[3]={'A','B','C'};

	// char arr[]={'A','B','C'};
	// int s=sizeof(arr)/sizeof(char);//3
	// for(int i=0;i<=s-1;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	// int arr1[]={1,2,3,4};
	// cout<<arr1<<endl;


	// char arr[]={'A','B','C'};
	// char arr[]={'A','B','C','\0'};
	// cout<<arr<<endl;


	// char arr[4]="dog";//strings they have by default '\0' at end
	// char arr[]="dog";
	// cout<<arr<<endl;


	// char arr[100];
	// int n;
	// cin>>n;//3
	// for(int i=0;i<n;i++){
	// 	cin>>arr[i];
	// }
	// cin>>arr;coding blocks-->coding
	// cin.getline(arrayname,size);
	// cin.getline(arr,100);//coding blocks-->coding blocks


	// for(int i=0;i<=n-1;i++){
	// 	cout<<arr[i]<<" ";
	// }
	// cout<<endl;

	// cout<<arr<<endl;


	char arr[100];
	char ch;
	cin>>ch;//'H'
	ch=cin.get();
	int i=0;
	while(ch!='\n'){
		arr[i]=ch;//H i i
		i++;
		// cin>>ch; //'$'
		ch=cin.get();
	}
	arr[i]='\0';
	// cout<<arr<<endl;//hey
	// cin.getline(arr,100,delimiter);
	// cin.getline(arr,100);//by default it has 3rd argument as '\n'
	// cin.getline(arr,100,'$');
	
	cin.getline(arr,100,'?');
	cout<<arr<<endl;






	return 0;
}