#include <bits/stdc++.h>

using namespace std;

long long MAX = 1e5+1,mod = 1e9+7;

vector<long long>fact(MAX),inv(MAX);

long long binpow(long long n,long long exp){
    long long res = 1;
    while(exp){
        if(exp&1)res = (res*n)%mod;
        n = (n*n)%mod;
        exp>>=1;
    }
    return res;
}

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    fact[0] = 1;
    inv[0] = 1;
    for (int i = 1; i < MAX; i++)
    {
        fact[i] = (fact[i-1]*i)%mod;
        inv[i] = binpow(fact[i],mod-2);
    }
    
    int test_case;
    cin>>test_case;
    while(test_case--){
        int n;
        cin>>n;
        vector<long long>b(n),a(n,0),cnt(29,0);
        for (int i = 0; i < n; i++)
        {
            cin>>b[i];
        }
        
        
        for (int i = n-1; i >=0; i--)
        {
            for (int j = 0; j < 29; j++)
            {
                if(b[i]&(1<<j)){
                    cnt[j] = i+1;
                    for (int k = 0; k < i; k++)
                    {
                        long long sub = (((((fact[i+1]*inv[k+1])%mod)*(inv[i-k]))%mod)*(1LL<<j))%mod;
                        b[k] = (b[k] - sub + mod) % mod;
                    }
                    
                }
            }
            
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < 29; j++)
            {
                if(cnt[j]){
                    a[i] = (a[i] + (1<<j));
                    cnt[j]--;
                }
            }
            cout<<a[i]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}