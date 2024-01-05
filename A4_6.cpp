#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    for(int i=1;i<=n/2+1;i++){
        for(int j=i;j<=n/2;j++){
            cout<<" ";
        }
        for(int j=65;j<=(2*i-1)+64;j++){
            cout<<char(j);
        }
        cout<<endl;
    }
    for(int i=1,k=n/2;i<=n/2;i++,k--){
        for(int j=1;j<=i;j++){
            cout<<" ";
        }
        for(int j=65;j<=(2*k-1)+64;j++){
            cout<<char(j);
        }
        cout<<endl;
    }
    return 0;
}
