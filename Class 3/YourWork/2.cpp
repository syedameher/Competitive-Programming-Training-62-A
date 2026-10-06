#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,q;
    cin>>n>>q;
    vector<long long>arr(n+1,0);
    vector<long long>pref(n+1,0);
    for(int i=1;i<=n;i++){
        cin>>arr[i];
        pref[i]=pref[i-1]+arr[i];
    }
    while(q--){
        int l,r;
        cin>>l>>r;
        long long range_sum=pref[r]-pref[l-1];
        cout<<"Sum from "<<l<<"to"<<r<<"="<<range_sum<<endl;
    }
    return 0;
}
