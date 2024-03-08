#include<bits/stdc++.h>
using namespace std;
int main ()
{
    int i , r , flag ;
    cout << "ENTER THE NO. :- ";
    cin >> i;

    for(i=2;i<i;i++)
    {
        r=i%i;
        if(r==0)
        {
            flag=1;
            break;
        }
    }
    if (flag==1)
    {
        cout  << "IS NOT A PRIME NO." ;
    }
    else 
    {
        cout  << "IS A PRIME NO." ;
    }
        
    

       return 0;
}
