#include <bits/stdc++.h>

using namespace std;

int main() {
    
    int test_case;
    cin>>test_case;
    while(test_case--){
        int n;
        cin>>n;
        vector<long long>a(n),pref(n);
        long long xr = 0;
        for (int i = 0; i < n; i++)
        {
            cin>>a[i];
            xr^=a[i];
            //pref[i] = xr;
        }
        if(xr==0)cout<<"yes\n";
        else{
            long long t = 0,cnt = 0;
            for (int i = 0; i < n; i++)
            {
                t^=a[i];
                if(t==xr) {
                    cnt++;
                    t = 0;
                }
            }
            if(t==xr)cnt++;
            if(cnt>=3 && cnt%2==1)cout<<"yes\n";
            else cout<<"no\n";
        }
    }
    return 0;
}