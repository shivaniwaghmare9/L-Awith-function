// Online C++ compiler to run C++ program online
//=================================fibonaachi with function==============================
#include <iostream>
using namespace std;
int fibo(int number){
    int ft=0;
    int st=1;
    int next=0;
    for(int i=1; i<=number; i++)
    {
        if(i==1)
        {
            cout<<ft;
            continue;
        }
        if(i==2)
        {
            cout<<st;
            continue;
        }
        next=ft+st;
        ft=st;
        st=next;
     if(i!=number)
       {
         cout<<next;
       }
    }
    return next;
    
}
int main() {
   int n;
   cout<<"enter n:";
   cin>>n;
   cout<<fibo(n);
    
}