#include<bits/stdc++.h>
using namespace std;

/*void print1(int n )
{
    int start=1;
       for(int i=0;i<n;i++)
       {
        if(i%2==0)
        {
           start=1;
        }
        else
        {
            start=0;
        }
         for(int j=0;j<=i;j++){
              cout<<start << " ";
              start = 1-start;
          }
          cout << endl;
       }
}*/

/*void print2(int n)
{
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout << j << " ";
        }
        for(int k=1;k<=2*n-2*i;k++)
        {
            cout << " " << " ";
        }
        for(int j=i;j>=1;j--)
        {
            cout << j << " ";
        }
        cout << endl;

    }
}*/

/*void print3(int n)
{int sum=0;
    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=i;j++)
        {
            sum=sum+1;
            cout << sum << " ";
        }
        cout << endl;
    }
}*/

/*void print4(int n)
{
     for(int i=0;i<n;i++)
    {
        for(char j='A';j<='A' + i;j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}*/

/*void print5(int n)
{
    for( int i=0;i<n;i++)
    {
        for(char j='A' ; j<='A'+ (n-i-1);j++)
        {
            cout << j << " ";

        }
        cout << endl;
    }

}*/

void print6(int n)
{
    for(int i=0;i<n;i++)
    {  char ch='A'+i;
        for(int j=0;j<=i;j++)
        {
            cout << ch << " ";
        }
        cout << endl ;
    }

}

void print7(int n)
{ 
    for(int i=0;i<n;i++)
    {
        char ch ='A';
        for(int j=0;j<n-i-1;j++)
        //   SPACE
        { 
           cout << " ";
        }
        int breakpoint=(2*i+1)/2;
        for(int k=0;k<2*i+1;k++)
        //   ALPHABET
        { 
           cout << ch ;
           if (k<=breakpoint)
           {
            
             ch = ch+1;
           }
           else 
           {
             ch=ch-1;
           }
           

        }
        for(int j=0;j<n-i-1;j++)
        // SPACE
        { 
           cout << " ";
        }

       cout << endl ;
       }
}

void print8(int n)
{
    
}

void print9(int n)
{
    for (int i=0;i<n;i++)
    {
        // FOR STARS
        for(int j=0;j<n-i;j++)
        {
            cout << "*";
        } 
        // FOR SPACES
        for(int k=0;k<2*i;k++)
        {
            cout << " " ;
        }
        // FOR STARS
         for(int j=0;j<n-i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }
     for (int i=1;i<=n;i++)
    {
        // FOR STARS
        for(int j=0;j<i;j++)
        {
            cout << "*";
        } 
        // FOR SPACES
        for(int k=0;k<2*n-2*i;k++)
        {
            cout << " " ;
        }
        // FOR STARS
         for(int j=0;j<i;j++)
        {
            cout << "*";
        }
        cout << endl;
    }

}

void print10(int n)
{
    for (int i=1;i<=n;i++)
    {
        // FOR STARS
        for(int j=0;j<i;j++)
        {
            cout << "*";
        } 
        // FOR SPACES
        for(int k=0;k<2*n-2*i;k++)
        {
            cout << " " ;
        }
        // FOR STARS
         for(int j=0;j<i;j++)
        {
            cout << "*" ;
        }
        cout << endl;
    }
    for (int i=1;i<=n;i++)
    {
        // FOR STARS
        for(int j=0;j<n-i;j++)
        {
            cout << "*";
        } 
        // FOR SPACES
        for(int k=0;k<2*i;k++)
        {
            cout << " " ;
        }
        // FOR STARS
         for(int j=0;j<n-i;j++)
        {
            cout << "*";
        }
        cout << endl;
}
}

void print11(int n)
{
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i==0 || j==0 || i==n-1 || j==n-1 )
            {
                cout << "*" ;
            }
            else
            {
                cout << " ";
            
            }  
        }
        cout << endl ;
    }

}

void print12(int n)
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {


        }
    }
}
    
    int main ()
    {
    int t;
    cin >> t;
    for (int i=1;i<=t;i++)
    {
         int n ;
         cin >> n ;
         print7(n);
    }
   
       return 0;
}
