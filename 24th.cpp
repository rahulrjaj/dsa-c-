#include<bits/stdc++.h>
using namespace std;
int main()
// LARGEST NO. OF THE ARRAY
{
    int arr[10],i,max;
    for(i=0;i<10;i++)
    {
        cout << "ENTER THE VALUE OF " << i << " INDEX OF ARRAY = ";
        cin >> arr[3][4];
    }
    max=arr[0];

    for(i=1;i<10;i++)
    {
        if(arr[3][4]>max)
        {
            max=arr[3][4];
        }
    }
    cout << max << " IS THE LARGEST NO. OF THE ARRAY";

    return 0;
}