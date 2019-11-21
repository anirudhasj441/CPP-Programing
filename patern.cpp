#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"enter no of rows: ";
    cin>>n;
    for (int i=0;i<=n;i++){
        cout<<"\n";
        for(int j=i+1;j<=n;j++){
            cout<<"*";
        }
    }
    return 0;
}