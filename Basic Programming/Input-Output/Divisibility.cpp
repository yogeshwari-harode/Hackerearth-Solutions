#include<bits/stdc++.h>
using namespace std;

void Divisibility(vector<int>&arr,int n)
{
    int last_digit;
    for(int i=0 ; i<n ; i++)
    {
        last_digit=0;
        last_digit=last_digit*10 + arr[i]%10;
    }
    if(last_digit%10==0)
    cout<<"Yes";
    else
    cout<<"No";
}

int main()
{
    int n;  cin>>n;
    vector<int>arr(n);
    for(int i=0 ; i<n ; i++)    cin>>arr[i];
    Divisibility(arr,n);
    return 0;
}
