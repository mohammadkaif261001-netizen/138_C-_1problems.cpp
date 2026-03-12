#include<iostream>
using namespace std;
int main(){
    int num, a=0, b=1, next;
    cout<<"Enter a number: ";
    cin>>num;
    cout<<"Febonacci series: ";
    for(int i=1;i<=num; i++){
        cout<<" "<<a;
        next=a+b;
        a=b;
        b=next;
    }
    return 0;
}