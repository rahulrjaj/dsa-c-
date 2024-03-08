#include<bits/stdc++.h>
using namespace std;
int main (){
    int a,i,b,ans;
    ans=1;
    cout << "ENTER THE NO. WHOSE EXPONENT YOU WANT TO FIND :- ";
    cin >> a ;
    cout << "ENTER THE EXPONENT POWER :- ";
    cin >> b;
    for (i=1 ; i<=b ; i++)
    {
        ans=ans*a;
    }
    cout << "ANSWER IS :-  " << ans ;

       return 0;
}