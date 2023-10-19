#include <bits/stdc++.h>
using namespace std;
int main(){

    int arr[] = {5,3,2,1,10,7,9};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=2;
    sort(arr,arr+n);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<"\nLargest Element: "<<arr[n-k]<<endl;









}
