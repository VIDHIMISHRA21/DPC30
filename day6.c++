#include<bits/stdc++.h>
using namespace std;
int main(){
    int sum=0;
    int a[]={1, 2, -3, 3, -1, 2};
    int n =sizeof(a)/sizeof(a[0]);
    for(int i=0;i<n;i++){
        sum=0;
        for(int j=i;j<n;j++){
            sum+=a[j];
        
        if(sum==0){;
        cout<<"("<<i<<" ," <<j<<")";
        cout<<endl;
    }
}
    }
}
