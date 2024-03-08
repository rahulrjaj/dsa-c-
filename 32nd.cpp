#include<bits/stdc++.h>
using namespace std;

/*void vectore()
{
    vector <int> v (5,10);
    v.push_back(11);
    v.emplace_back(12);

    cout << v[6];
}

void vectore()
{
    vector <int> v (5,10);
    v.push_back(11);
    v.emplace_back(12);


    v.erase(v.begin());
    for(auto  it = v.begin() ; it < v.end() ; it++ )
    {
        cout << *(it) << " " << endl ;
    }
    cout << endl ;

    v.insert(v.begin()+2,2,30);
    for(auto  it = v.begin() ; it < v.end() ; it++ )
    {
        cout << *(it) << " " << endl ;
    }
    cout << endl ;

    cout << v.size() << endl ;

    cout << v.empty() ;
}*/

/*void eset()
{
    set<int>st;
    st.insert(1);
    st.insert(2);
    st.insert(3);
    st.insert(4);
    st.emplace(4);
    st.insert(5);
    auto it = st.find(4);

    

}*/

/*void esort()
{
    int n ;
    cin >> n;

    int arr[n];

    for(int i=0 ; i<=n ; i++)
    {
        cin >> arr[i];
    }

      for(int i=0 ; i<=n ;i++)
    {
        cout <<  arr[i] << endl;
    }

    sort(arr , arr+n+1 , greater<int>() );

    for(int i=0 ; i<=n ;i++)
    {
        cout <<  arr[i] << endl;
    }
}*/

void strings()
{
    string s ='123';

    do
    {
        cout << s << endl ;
    } while( next_permutation(s.begin() , s.end()));

}

int main()
{
   strings();
}