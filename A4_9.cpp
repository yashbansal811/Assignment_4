#include<iostream>
using namespace std;
int main()
{
    int n,flag;
    cin>>n;
    for(int i=2;i<n;i++){
        if(i==2){
            flag=1;
        }
        for(int j=2;j<i;j++){
            if(i%j==0){
                break;
            }
            else if(j==i-1){
                flag=1;
            }
        }
        if(flag==1){
            for(int k=i;k<n;k++){
                for(int j=2;j<k;j++){
                    if(k%j==0){
                        break;
                    }
                    else if(j==k-1){
                        if(i+k==n){
                            cout<<i<<"+"<<k<<"="<<n<<endl;
                        }
                    }
                }
            }
        }
    }
}