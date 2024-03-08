#include<bits/stdc++.h>
using namespace std;
void state(string &s)

//pass by value

{
s [0]= 's' ;
cout << s << endl ;
}
int main ()
{
    string s = "rahul" ; 
    state  (s);
    cout << s << endl ;
    return 0;
    
}
/*  PASS BY VALUE function statement computer pass a carbon copy value to the function at it change 
it but if print the value again you get the original value. */

// PASS BY REFRENCE means the original value is passed if you make change on it the changes are made permanent