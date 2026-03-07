#include<iostream>
using namespace std;
int main(){
    int n , i , sum=0;
    cout<<"Enter a number: ";
    cin>>n;
    for(i=1; i<=n; i++){
        sum=sum+i;
    }
    cout<<"sum: "<<sum<<endl;
    return 0;
}