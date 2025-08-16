//MISSING ELEMENT IN AN ARRAY
#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[]={1,2,4,5};
    int n =sizeof(array)/sizeof(array[0]);

    for(int i=1;i<=n;i++){
      int flag=0;
        for(int j=0;j<n;j++){
         if(array[j]==i){
            flag=1;
            break;
        }
    }
        if(flag==0)
        {
            cout<<"MISSSING ELEMENT= ";
            cout<<i;
        }
    }
}
