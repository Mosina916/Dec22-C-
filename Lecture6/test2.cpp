#include<iostream>
using namespace std;

int main()
{
    int rowno,trows;
    cin>>trows;

    if(trows==1){
        cout<<"1"<<endl;
        return 0;

    }
    for(rowno=1;rowno<=trows-1;rowno++)
    {
        cout<<"  ";
    }
    cout<<"1  "<<endl;

    for(rowno=2;rowno<=trows/2+1;rowno++)
    {
        //spaces 
        for(int spc=1;spc<=2*(trows/2 +1)-(2*rowno);spc++)
        {
            cout<<"  ";
        }
        //number --
        for(int numc=rowno;numc>=1;numc--)
        {
           cout<<numc<<" ";
        }
       
        for(int spc=1;spc<=2*(rowno-1)-1;spc++)
        {
            cout<<"  ";
        }
        //number
        for(int numc=1;numc<=rowno;numc++)
        {
            cout<<numc<<" ";
        }
        cout<<endl;
    }

    for(rowno=trows/2;rowno>=2;rowno--)
    {     
        //spaces
        for(int spc=1;spc<=2*(trows/2 +1)-(2*rowno);spc++)
        {
            cout<<"  ";
        }
        //number --
        for(int numc=rowno;numc>=1;numc--)
        {
           cout<<numc<<" ";
        }
        for(int spc=1;spc<=2*(rowno-1)-1;spc++)
        {
            cout<<"  ";
        }
        //number
        for(int numc=1;numc<=rowno;numc++)
        {
            cout<<numc<<" ";
        }
        cout<<endl;
        
    }
    for(rowno=1;rowno<=trows-1;rowno++)
    {
        cout<<"  ";
    }
    cout<<"1 "<<endl;
	return 0;
}