#include<bits/stdc++.h>
using namespace std;

int main () 
  {
    int grade;
    cout << "ENTER THE GRADE:- ";
    cin   >> grade;
    if (grade<=25){
        cout << "THE GRADE IS :- F";
    }
    else if (grade<=45){
        cout << "THE GRADE IS :- E";
    }
    else if (grade<=65){
        cout << "THE GRADE IS :- D";
    }
    else if (grade<=85){
        cout << "THE GRADE IS :- C";
    }
    else if (grade<=95){
        cout << "THE GRADE IS :- B";
    }
    else if (grade<=100){
        cout << "THE GRADE IS :- A";
    }
    else if (grade>100){
        cout << "INVALID INPUT";
    }
    return 0;
}