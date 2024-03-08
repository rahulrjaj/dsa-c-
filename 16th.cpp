#include<bits/stdc++.h>
using namespace std;
int main (){
    int i , n;
    n=5;
    for(i=1;i<=10;i++){
    if ( i % 2 == 0)
    {
        n = n*i ;
        cout << n << endl ;

    }
    else 
    {
        n = -n*i ;
        cout << n << endl  ;
    }
    }

       return 0;
}
