#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int test_case;
    cin>>test_case;
    while(test_case--){
        int n;
        cin>>n;
        vector<int>a(n),check(n,0),min_val(n),max_val(n);
        int flag = 0,maxn = 2e9,minn = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
        }

        int k = 0;
        for (int i = 0; i < n; i++)
        {
            if(i!=n-1 && a[i]>a[i+1]){
                check[i] = 1;
                flag++;
                k = max(k,a[i]-a[i+1]);
            }
        }
        // The greedy check (replaces all your check[], minn, maxn logic)
        int prev = a[0];
        bool possible = true;

        for (int i = 1; i < n; i++) {
            if (a[i] >= prev) {
                
                prev = a[i];
            } 
            else if (a[i] + k >= prev) {
                
                prev = a[i] + k;
            } 
            else {
                
                possible = false;
                break;
            }
        }
        
        if(possible)cout<<"Yes\n";
        else cout<<"No\n";
    }
    return 0;
}