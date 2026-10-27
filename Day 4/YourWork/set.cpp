#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    set<int>s;
    for(int i=0;i<n;i++){
        int val;
        cin>>val;
        s.insert(val);
    }
    cout<<"Total unique elements:"<<s.size()<<endl;
    cout<<"Elements in sorted order:"<<endl;
    for(int x:s){
        cout<<x<<" ";
    }
    cout<<endl;

    int target;
    cin>>target;
    if(s.count(target)){
        cout<<target<<"is present in the set.";
    } else{
        cout<<target<<"is NOT present in the set.";
    }
    return 0;

}
