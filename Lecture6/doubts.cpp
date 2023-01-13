// #include<iostream>
// #include<math.h>
// using namespace std;
// int num(int p){
//     int temp,sum=0;
//     while(p!=0){
//         temp=p%10;
//         sum+=pow(temp,3);
//         p/=10;
//     }
//     return sum;
    
// }
// int main()
// {
//     int n1,n2,count=0;
//     cin>>n1>>n2;
//     for(int i=n1;i<n2+1;i++){
//         num(i);
//         int value=num(i);
//         if(value==i){
//             cout<<value<<endl;
//         }
//     }
    
    

// }


// #include<iostream>
// #include<math.h>
// using namespace std;

// int main()
// {
//     long long int N;
//     cin>>N;//105
//     long long int sum=0;
    
//     if(N == 0)
//     {
//         cout<<5;
//         // exit;
//         return 0;
//     }
//     else{
//         while(N>0)
//         {
//            int rem=N%10;
//             N = N/10;
//             if(rem == 0)
//             {
//                 rem=5;
//             }
//             sum = sum * 10 + rem;
//         }
//         long long int sum1=0;
//         while(sum>0)
//         {
//             int rem=sum%10;
//             sum = sum/10;
//             sum1 = sum1 * 10 + rem;
//         }
//         cout<<sum1;
//     }
// }


#include<iostream>
using namespace std;
int main() {
   long long int n;
   cin>>n;
   
    long long int rev=0;
    if(n==0){
        cout<<5<<endl;
        return 0;
    }

    int m;
    long long no=0;
    int rm;
    cin>>n;
    while(n>0)
    {
        m=n%10;
        if(m==0)
        {
            m=5;
            rev=rev*10+m;
        }
        else {
            rev=rev*10+m;
        }
        n=n/10;
    }
    while(rev>0)
    {
        rm=rev%10;
        no=no*10+rm;
        rev=rev/10;
    }
    cout<<no;
    return 0;
}




