#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    for(int i=0;i<4;i++){
        cin>>a[i];

    }
    for(int i=0;i<4;i++){
        cout<<a[i];
        if(i<3)cout<<',';
    }
    cout<<endl;
    return 0;
}
