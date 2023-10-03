#include <iostream>
using namespace std;

int main(){
    int m,max;
    long long min;
    cin>>m;
    max=0;
    min=20000000000;
    int arr[m];
    cout<<"changed file";
    for(int i=0;i<m;i++){
        cin>>arr[i];
        if (max<arr[i]){
            max=arr[i];
        }
        if (min>arr[i]){
            min=arr[i];
        }
    } 
    cout<<max<<" "<<min;

    return 0;
}