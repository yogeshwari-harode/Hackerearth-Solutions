#include <bits/stdc++.h>
using namespace std;
 
void convertOpposite(string &str)
{
    int n = str.length();
 
    for (int i = 0; i < n; i++) 
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            str[i] = str[i] - 32;   // Convert lowercase to uppercase
            
        else if (str[i] >= 'A' && str[i] <= 'Z')
            str[i] = str[i] + 32;   // Convert uppercase to lowercase
    }
}
 
int main()
{
    string str;
    cin>>str;
    convertOpposite(str);
    cout << str;
    return 0;
}
