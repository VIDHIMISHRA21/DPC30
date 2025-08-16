#include<bits/stdc++.h>
using namespace std;

int main(){
    int array[]={1,2,4,5};
    int n =sizeof(array)/sizeof(array[0]); int max=5;
    int sum=(max*(max+1)) / 2;
    int sum2=0;

    for(int i=0;i<n;i++){
        sum2= sum2 +array[i];
        
    }
    int sum3= sum-sum2;
    cout<<sum3;
    
}
