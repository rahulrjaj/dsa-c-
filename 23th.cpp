#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num, temp ,sum ,r;
    
    cin >> num;
    temp=num;
    sum=0;
    while(num>0)
    {
        r=num%10;
        sum=sum+pow(r,3);
        num=num/10;
    }
    if(sum==temp)
    {
        cout << temp << "  IS AN ARMSTRONG NO." ;
    }
    else 
    {
        cout << temp << "  IS not AN AEMSTRONG NO." ;
    }

    return 0;

}