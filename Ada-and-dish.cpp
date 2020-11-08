#include <bits/stdc++.h>
using namespace std;
int adaAndDishes(int arr[],int n){
    int s1=0,s2=0;
    sort (arr, arr + n, greater<int>());
    for (int i = 0; i < n; ++i) {
        if (s1<s2) s1+=arr[i];
        else if(s1>s2) s2+=arr[i];
        else s1+=arr[i];
    }
    return max(s1,s2);
}
int main(){
    int n;
    cout<<"Enter Length of Arr:"<<endl;
    cin>>n;
    cout<<"Enter elements"<<endl;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<adaAndDishes(arr,n);
    return 0;
}
