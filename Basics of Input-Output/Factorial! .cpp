#include<bits/stdc++.h>
using namespace std;

int factorial(int n)
{
    if(n>=1)
    return (n*factorial(n-1));
    else
    return 1;
}

void print(int result)
{
    cout<<result<<endl;
}

int main()
{
    int n;
    cin>>n;
    int fact = factorial(n);
    print(fact);
    return 0;
}
