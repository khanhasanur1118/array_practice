#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++ ){
        for(int j=0;j<m;j++ ){
            cin>>arr[i][j];
        }
    }
    cout<<endl;
        for(int i=0;i<n;i++ ){
                cout<<"row: "<<i;
        for(int j=0;j<m;j++ ){
            cout<<"column: "<<j;
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



return 0;

}
