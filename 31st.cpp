#include<bits/stdc++.h>
using namespace std;
void pairp()
{
   // pair<int , pair < int , float> > p ={3,{4,5.3}};

   pair <int , char> arr[]= {{1,'A'},{2,'B'},{3,'C'}};
   for (int i=0 ; i<3 ; i++)
   {
    cout << arr[i].first << " , " << arr[i].second  << endl;
   }   

}
int main()
{
    pairp();
    
}