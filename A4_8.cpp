#include<iostream>
using namespace std;
int main()
{
    int n,flag,p=3;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        if(i==1){
            cout<<"2";
        }
        else{
            for(int j=1;j<=i;){
                for(int k=2;k<p;k++){
                    if(p%k==0){
                        break;
                    }
                    else if(k==p-1){
                        cout<<p<<" ";
                        j++;
                    }
                }
                p++;
            }
        }
        cout<<endl;
    }
}