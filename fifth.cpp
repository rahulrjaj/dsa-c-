#include<bits/stdc++.h>
using namespace std;
/* 
Nested IF STATEMENTS, meaning one IF function inside of another
*/
int main ()   {
    int age;
    cout << "ENTER THE AGE  :-  ";
    cin >> age;
    if (age<18){
        cout << "NOT ELIGIBLE FOR JOB";
    }
    else if (age<=57){
        cout << "ELIGIBLE FOR JOB";
        if(age>=55){
            cout << " , but retirement soon ";
        }
    
    }
    else{
        cout << "RETIREMENT";
    }
    
    return 0;
}
