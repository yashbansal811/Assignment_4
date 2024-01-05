#include<iostream>
using namespace std;
int main()
{
    int sum,d,n;
    for(int i=100;i<=500;i++){
        n=i;
        sum=0;
        while(n>0){
            d=n%10;
            sum+=(d*d*d);
            n/=10;
        }
        if(sum==i){
            cout<<i<<endl;
        }
    }
    return 0;
}