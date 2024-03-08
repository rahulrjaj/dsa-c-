#include<bits/stdc++.h>
using namespace std;
int main() {
    int numo, deno ,i ;
    for (i = 1; i <= 10; i++) {
        
        if (i % 2 == 0) {
            numo = i;
            deno = i * i;
        } else {
            numo= -i;
            deno = i * i;
        }

       cout << numo << "/" << deno << endl;
    
    }

    return 0;
}
