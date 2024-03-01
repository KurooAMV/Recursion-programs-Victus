#include<iostream>
using namespace std;
int factorial(int n){
    if(n==1){return  1;}
    int fact = factorial(n-1);
    return n*fact;
}
int main(){
    int n;
    cout<<"Enter the number for factorial: ";
    cin>>n;
    int res=factorial(n);
    cout<<"The factorial of "<<n<<" is "<<res;
    return 0;
}