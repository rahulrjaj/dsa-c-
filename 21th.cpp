#include<bits/stdc++.h>
using namespace std;

void print1(int n)
{
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        { 
            cout << "* ";
        }
       cout << endl ;
}
    }

void print2(int n)
{
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        { 
            cout << "* ";
        }
       cout << endl ;
       }
    }

void print3(int n)
{
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        { 
            cout << j << " ";
        }
       cout << endl ;
       }
    }

void print4(int n)
{
   for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        { 
            cout << i << " ";
        }
       cout << endl ;
       }
    }

void print5(int n)
{
   for(int i=1;i<=n-i+1;i++)
    {
        for(int j=1;j<=i;j++)
        { 
            cout <<  "* ";
        }
       cout << endl ;
       }
    }
void print6(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n-i-1;j++)
        //   SPACE
        { 
           cout << " ";
        }
        for(int k=0;k<2*i+1;k++)
        //   STAR
        { 
           cout << "*";
        }
        for(int j=0;j<n-i-1;j++)
        // STAR
        { 
           cout << " ";
        }

       cout << endl ;
       }
}
void print7(int n)
{
   for(int i=0;i<n;i++)
    {
        for(int j=0;j<i;j++)
        //   SPACE
        { 
           cout << " ";
        }
        for(int k=0;k<2*n-(2*i+1);k++)
        //   STAR
        { 
           cout << "*";
        }
        for(int j=0;j<i;j++)
        // STAR
        { 
           cout << " ";
        }

       cout << endl ;
       }
    }
void print8(int n )
{
   for(int i = 1 ; i <= 2*n-1 ; i++)
   {
    int stars=i;
    if (i > n )
        stars = 2*n-i;
    for ( int j = 1 ; j <= stars ; j++)
    {
        cout << "*";
    }
    cout << endl ;
   } 
}
    int main (){
    int t;
    cin >> t;
    for (int i=1;i<=t;i++)
    {
         int n ;
         cin >> n ;
         print6(n);
    }
   
       return 0;
}
