#include<iostream>
using namespace std;
int co=0;
void permuattion(char inp[10000],int i){
	// base case 
	if(inp[i]=='\0'){
		cout<<inp<<endl;//abc acb
		co++;
		return;
	}
	
	// rec case
	for(int j=i;inp[j]!='\0';j++){
		swap(inp[i],inp[j]);//swap bac
		permuattion(inp,i+1);//abc acb
		swap(inp[i],inp[j]);//backtracking
	}
	

	
}
int main(){
	char inp[10000];
	
	cin>>inp;//"abc"
	permuattion(inp,0);

	cout<<"total permuattion "<<co<<endl;




	return 0;
}