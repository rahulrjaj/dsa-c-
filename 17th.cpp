#include<bits/stdc++.h>
using namespace std;
// table using while loops
int main (){
    int i=1 , n ;
    cout << "ENTER THE NO. WHOSE TABLE YOU WANT TO FIND :-  ";
    cin >> n ;
    while(i<=10){
        cout << n << "*" <<  i  << "=" << i*n << endl ;
        i++;
    }
       return 0;
}
