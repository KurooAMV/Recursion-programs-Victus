#include<iostream>
using namespace std;
void dec(int n){
    if(n<0){return;}
    cout<<n<<" ";
    dec(n-1);
}

void inc(int n){
    if(n<0){return;}
    inc(n-1);
    cout<<n<<" ";
}

int main(){
    int n;
    cout<<"Enter the number: ";
    cin>>n;

    int i;
    cout<<"Enter 0 for increasing order and 1 for decreasing order: ";
    cin>>i;

    if(i==0){inc(n);}
    else if(i==1){dec(n);}
    else{cout<<"operation declined.";}
    return 0;
}