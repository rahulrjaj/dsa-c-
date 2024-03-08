#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],i,diff,max,min;
    for(i=0;i<10;i++)
    {
        cout << "ENTER THE VALUE FOR " << i << " INDEX :- ";
        cin >> arr[i];
    }
    max=arr[0];
    for(i=1;i<10;i++)
    {
        if(arr[i]>max)
        {
            max=arr[i];
        }
    }
     for(i=1;i<10;i++)
    {
        if(arr[i]<min)
        {
            min=arr[i];
        }
    }
    diff=max-min;
    
    cout << "THE DIIFERNCE BTW LARGEST AND THE SMALLEST NO. OF THE ARRAY IS = " << diff ;

    return 0;

    }