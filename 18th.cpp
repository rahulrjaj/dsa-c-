#include<bits/stdc++.h>
using namespace std;
int main() {
    int i,j,k;
    for (i = 1; i <=9; i++) 
    {
        for (j = 1; j <= i; j++) {
            cout << " ";
        }
        for (k = 1; k <= 10 - i; k++) {
            cout << "  *";
        }
        cout << endl;
    }
    return 0;
}
