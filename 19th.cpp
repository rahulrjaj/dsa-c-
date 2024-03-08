#include<bits/stdc++.h>
using namespace std;
void something(int num)
{
    cout << num << endl;
    num += 5;
    cout << num << endl;
    num += 5;
    cout << num << endl;
}

int main ()
{
    int num = 25;
    something(num);
    cout  << num << endl ;
    return 0;
}


//pass by value  pass by refrance if you use & num in the code line 3 so the original value is changed