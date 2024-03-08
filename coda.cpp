#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    int r = 0;
    int sum = 0;
    int temp = n;
    while(n>0)
    {
        r = n%10;
        sum= sum*10 +r;
        n=n/10;

    }
    if (temp==sum)
    {
        cout << " True";
    }
    else 
    {
        cout << "false";
    }
}

/*void print1(int n)
{
    
    int ctr=0;
    while(n>0)
    {
        n=n/10;
        ctr++;
    }
    cout << ctr << endl ;
}*/

/*void print2(int n)
{
    int r;
    int rvse=0;
    while(n>0)
    {
        r=n%10;
        rvse = rvse*10+r;
        n=n/10;
    }

    cout << rvse << endl;
}*/

/*void print3(int n , int m)
{
    int gcd=1;
    int ll, ul;
    if(m>n)
    {
        ul=m;
        ll=n;
    }
    else
    {
        ul=n;
        ll=m;
    }
    int i;
    for(i=1;i<=ll;i++)
    {
        if( ll%i==0 && ul%i==0)
    }
    

}*/


int main()
{
    int n ;
    cin >> n;
    print(n);
    return 0;
}
