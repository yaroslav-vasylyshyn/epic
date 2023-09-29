#include <iostream>
using namespace std;

int main(){
    cout<<"enter m,n";
    int m,n,a[m][n];
    cin>>m>>n;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>a[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<a[i][j]<<'\t';
        }
        cout<<'\n';
    }
    return 0;
}
