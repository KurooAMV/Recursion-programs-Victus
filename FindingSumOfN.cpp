#include<iostream>
using namespace std;
//REcursion 
int Sum(int n){
    if(n==0){
        return 0;
    }
    int prevsum=Sum(n-1);
    return n+prevsum;
}
int main(){
    int n, sum;
    cout<<"Enter the number: ";
    cin>>n;

    sum=Sum(n);
    cout<<"THe sum is: "<<sum<<endl;
    return 0;
}