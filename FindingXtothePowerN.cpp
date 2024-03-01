#include<iostream>
using namespace std;
int power(int x, int n){
    if(n==0){return 1;}
    int pow=power(x,n-1);
    return x*pow;
}
int main (){
    int x,n;
    cout<<"Enter x: ";
    cin>>x;
    cout<<"Enter the power n: ";
    cin>>n;

    int res=power(x,n);
    cout<<x<<" raised to the power "<<n<<" is: "<<res<<"."<<endl;

    return 0;
}