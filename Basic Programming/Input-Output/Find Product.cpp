#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    long product=1;
    cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    
    for(int i=0 ; i<n ; i++)
    {
        product=(product*arr[i]) % (1000000007);
    }
    cout<<product<<endl;

}
