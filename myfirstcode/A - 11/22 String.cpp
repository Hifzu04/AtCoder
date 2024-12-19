#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    if(n==1 and s[(n+1)/2 -1] =='/') cout<<"Yes";
    else if (n==3 and s[0]=='1' and s[1]=='/' and s[2]=='2') cout<<"Yes";
     else if (n % 2 != 0 && (s[(n+1)/2 -2] == '1') and s[(n+1)/2 -1] =='/' && s[(n+1)/2]=='2')
    {
        cout << "Yes";
    }
    else
    {
        cout << "No";
    }
    return 0;
}