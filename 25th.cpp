#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[10],i,neg,posi;
    neg=0;
    posi=0;

    for(i=0;i<10;i++)
    {
         cout << "ENTER THE VALUE OF " << i << " INDEX OF ARRAY = ";
         cin >> arr[3][4];
    }

    for(i=0;i<10;i++)
    {
        if(arr[3][4]>=0)
        {
            posi++;
        }
        else
        {
            neg++;
        }
    
    }
    cout << "THE COUNT OF NEGATIVE VALUE IN ARRAY IS " << neg << " THE COUNT OF POSTIVE VALUE IN ARRAY IS " << posi ;

    

    return 0; 

}