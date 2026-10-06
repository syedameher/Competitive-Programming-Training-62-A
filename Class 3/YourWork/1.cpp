#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<long long>pref(n);
    pref[0]=arr[0];
    for(int i=1;i<n;i++){
        pref[i]=pref[i-1]+arr[i];
    }
    cout<<"Prefix Sum Array:"<<endl;
    for(int i=0;i<n;i++){
        cout<<pref[i]<<" ";
    }
    cout<<endl;
    return 0;
}
