#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int D,online_taxi,classic_taxi;  cin>>D;
    int a1,b1,c1;   cin>>a1>>b1>>c1;
    int a2,b2,c2,d2;   cin>>a2>>b2>>c2>>d2;

    online_taxi= a1 + (D-b1) * c1;
    classic_taxi= b2 + ((D/a2) * c2) + (D * d2);
    if(online_taxi<=classic_taxi)
    cout<<"Online Taxi";
    else
    cout<<"Classic Taxi";

    return 0;
}
