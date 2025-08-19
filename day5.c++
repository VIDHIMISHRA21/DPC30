#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[]={16, 17, 4, 3,5 ,2};
    int n=sizeof(arr)/sizeof(arr[0]);
    bool leader;
    for(int i=0;i<n;i++){
        leader=true;
            for(int j=i+1;j<n;j++){
                if(arr[j]>arr[i]){
                    leader=false;
                    break;
                }
            }
                if(leader==true){
                    int j;
                    cout<<arr[i]<<" ";
                }
    }
}
