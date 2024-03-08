#include<bits/stdc++.h>
using namespace std;
void print1(int n)
{
    int i , tn, t1 , t2 ;
    t1=0;
    t2=1;
    cout << t1;
    cout << endl;
    cout << t2;
    cout << endl;

    for(i=1;i<=n-2;i++)
    
    {
       tn=t1+t2;
        cout << tn;
        t1=t2;
        t2=tn;
        cout << endl;
    }
    
   
}
int main (){
    int t;
    cout << "test case no :- ";
    cin >> t;
    for (int i=1;i<=t;i++)
    {
         int n ;
        
         cin >> n ;
         print1(n);
    }
       return 0;
}
