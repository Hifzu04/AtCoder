#include <bits/stdc++.h>
#define ll long long
#define loop(n) for(int i=0;i<n;i++)
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n , d;
    cin>>n>>d;
    
    vector<pair<int,int>>v;
    for(int i =0 ; i<n ; i++){
        int t, l; 
        cin>>t>>l;
        v.emplace_back(t,l);
    }

    for(int i=1 ; i<=d ; i++){
        int ans =0;
        for(auto it:v){
            int length = it.second+i;
            int thickness = it.first;
            ans = max(ans, length*thickness);
        }
        cout<<ans<<"\n";
    }

   
    return 0;
}