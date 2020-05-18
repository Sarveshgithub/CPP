#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n;
    long long turn=0;
    int tmp;
    vector<int> arr;
    
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>tmp;
        arr.push_back(tmp);
    }
    
    for(int i=1;i<n;i++){
        if(arr[i-1]>arr[i]){
            tmp=arr[i-1]-arr[i];
            turn+=tmp;
            arr[i]=arr[i-1];
        }
        //cout<<arr[i]<<" ";
    }
    cout<<turn<<"\n";

    return 0;
}
