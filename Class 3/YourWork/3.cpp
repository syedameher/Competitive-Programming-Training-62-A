#include<bits/stdc++.h>
using namespace std;
int binarySearch(vector<int>& arr,int target){
    int low=0,high=arr.size()-1;
    while(low<=high){
        int mid=low+(high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]<target){
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
    return -1;
}
int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++)cin>>arr[i];
    sort(arr.begin(),arr.end());
    int index=binarySearch(arr,target);
    if(index!=-1){
        cout<<"Found at index "<<index<<endl;
    }
    else{
        cout<<"Not found"<<endl;
    }
    return 0;
}
