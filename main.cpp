#include <iostream>
using namespace std;

int main(){
    int m,max;
    cin>>m;
    max=0;
    int arr[m];
    for(int i=0;i<m;i++){
        cin>>arr[i];
        if (max<arr[i]){
            max=arr[i];
        }
    } 
    cout<<max;
    return 0;
}