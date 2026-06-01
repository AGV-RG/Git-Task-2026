#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int test_case;
    cin>>test_case;
    while(test_case--){
        int n;
        cin>>n;
        vector<long long>a(n),b(n);
        //long long maxn = 0, max_idx = 0,opp = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }
        
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
            // if(maxn<b[i] || maxn<a[i]){
            //     maxn = max(a[i],b[i]);
            //     max_idx = i;
            //     opp = min(a[i],b[i]);
            // }
            // else if((maxn==b[i] || maxn==a[i]) && opp<min(a[i],b[i])){
            //     max_idx = i;
            //     opp = min(a[i],b[i]);
            // }
        }
        long long sum = 0,maxn  = 0;
        for (int i = 0; i < n; i++)
        {
            sum+=max(a[i],b[i]);
            maxn = max(min(a[i],b[i]),maxn);
        }

        cout<<sum + maxn<<"\n";
    }
    return 0;
}